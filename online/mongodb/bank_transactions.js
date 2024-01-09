"strict mode"
const {MongoClient, ObjectId} = require("mongodb");
const uri = require("./atlas_uri");
const client = new MongoClient(uri);

const dbname = "bank";
const accounts = client.db(dbname).collection("accounts");
const transactions = client.db(dbname).collection("transactions");

Updated = [{
    _id: 1,
    name: "prabhoot",
    balance: 200
}, {
    _id: 2,
    name: "ronit",
    balance: 200
}]
const sender_id = 1;
const receiver_id = 2;
const transferAmount = 50;
const transaction_id = "TR003";
//start session
const session = client.startSession();

const main = async () => {
    try {
        const transactionResult = await session.withTransaction(async () => {
            console.log(`Amount of rupees ${transferAmount} Transferring from ${sender_id} to ${receiver_id}` );
            //step 1: reduce the amount from the sender 
            const updateSendersResult = await accounts.updateOne(
                {_id: sender_id},
                {$inc: {balance: -transferAmount}},
                {session});
            console.log(`${updateSendersResult.matchedCount} document(s) matched the filter, updated ${updateSendersResult.modifiedCount} document(s) for the senders account`)

            // step 2: add the amount to the receiver account

            const updateReceiversResult = await accounts.updateOne(
                {_id: receiver_id},
                {$inc: {balance: transferAmount}},
                {session});
            console.log(`${updateReceiversResult.matchedCount} document(s) matched the filter, updated ${updateReceiversResult.modifiedCount} document(s) for the receivers account`)

            // step 3: Insert the transaction details into log :
            const transfer = {
                transaction_id: transaction_id,
                amount: transferAmount,
                from_account: sender_id,
                to_account: receiver_id
            }
            const insertTransactionDetails = await transactions.insertOne(transfer, {session})
            console.log(`Successfully inserted of ${insertTransactionDetails.insertedId} into Transaction Log`)
            //step 4: Update the transaction details in senders account
            const updatedSendersTransactionDetails = await accounts.updateOne(
                {_id: sender_id},
                {$push: {transfer_complete: transaction_id}},
                {session}
            )
            console.log(`${updatedSendersTransactionDetails.matchedCount} document(s) matched the filter, updated ${updatedSendersTransactionDetails.modifiedCount} document(s) for the senders account`)

            //step 5: Update the transaction details in receivers account

            const updatedReceiversTransactionDetails = await accounts.updateOne(
                {_id: receiver_id},
                {$push: {transfer_complete: transaction_id}},
                {session}
            )
            console.log(`${updatedReceiversTransactionDetails.matchedCount} document(s) matched the filter, updated ${updatedSendersTransactionDetails.modifiedCount} document(s) for the receivers account`)
        })
        console.log(`Committing transaction ...`);
        // if (transactionResult == true)
        //     console.log("The reservation is done Successfully");
        // else {
        //     console.log("The transaction is intensionally aborted");
        // }
    } catch (err) {
        console.log(`Transaction Aborted => ${err}`);
        process.exit(1);
    } finally {
        await session.endSession();
        await client.close();
    }
};
main();
