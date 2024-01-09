const {MongoClient, ObjectId} = require("mongodb");
const uri = require("./atlas_uri");
const client = new MongoClient(uri);

const dbname = "blog";
const collectionName = "posts";
const accountCollection = client.db(dbname).collection(collectionName);

const connecttodatabase = async () => {
    try {
        client.connect();
        console.log("Connected");
    } catch (err) {
        console.log(err);
    }
};
const toUpdate = {}
const updated = {$rename: {Responsibility: "responsibility"}}
const main = async () => {
    try {
        connecttodatabase();
        let result = await accountCollection.updateMany(toUpdate, updated);
        await result.modifiedCount > 0 ? console.log(`no. of modifications ${result.modifiedCount}`) : console.log(`error updating `)
        let my = await accountCollection.find(toUpdate)
        await my.forEach(m=>console.log(m));
    } catch (err) {
        console.log(err);
    } finally {
        client.close();
    }
};
main();
