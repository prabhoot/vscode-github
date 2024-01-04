const { MongoClient } = require("mongodb");
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
const toFind = { name: "prabhoot" };
const main = async () => {
  try {
    connecttodatabase();
    let result = accountCollection.findOne(toFind);
    console.log(result);
  } catch (err) {
    console.log(err);
  } finally {
    client.close();
  }
};
main();
