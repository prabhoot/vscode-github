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
// const toFind = {_id: new ObjectId('658fdfbfc6cbcc9ed7ff96cd')};
const toFind = {age: {$gt: 20}}
const main = async () => {
  try {
    connecttodatabase();
    // let result = await accountCollection.findOne(toFind);
    let results = await accountCollection.find(toFind);
    let count = await accountCollection.countDocuments(toFind);
    console.log(`find ${count} document\n`);
    // console.log(result);
    // await results.forEach(doc=>console.log(doc));
    for await (doc of results) {
      console.log(doc);
    }
  } catch (err) {
    console.log(err);
  } finally {
    client.close();
  }
};
main();
