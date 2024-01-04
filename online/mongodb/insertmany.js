const { MongoClient } = require("mongodb");
uri = require("./atlas_uri");
const client = new MongoClient(uri);

const dbname = "blog";
const collectionName = "posts";
const account_collection = client.db(dbname).collection(collectionName);

const connecttodatabase = async () => {
  try {
    client.connect();
    console.log("Connected to database");
  } catch (err) {
    console.log(err);
  }
};

const samleinput = [
  { name: "ronit", age: 20 },
  { name: "shivam", age: 21 },
];

const main = async () => {
  try {
    let result = await account_collection.insertMany(samleinput);
    console.log(result);
  } catch (err) {
    console.log(err);
  } finally {
    client.close();
  }
};
main();