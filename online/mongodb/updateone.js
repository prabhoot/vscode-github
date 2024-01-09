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
const toUpdate = {_id: new ObjectId('658fdfbfc6cbcc9ed7ff96cd')}
const updated = {$inc:{age:-21}}
const main = async () => {
  try {
    connecttodatabase();
    let result = await accountCollection.updateOne(toUpdate, updated);
    result.modifiedCount == 1 ? console.log("Updated") : console.log("Can't updated");
    console.log(result);
    console.log(await accountCollection.findOne({name:"prabhoot"}))
  } catch (err) {
    console.log(err);
  } finally {
    client.close();
  }
};
main();
