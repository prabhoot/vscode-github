const { MongoClient } = require("mongodb");
const uri = require("./atlas_uri");
console.log(uri);

const client = new MongoClient(uri);
const dbname = "blog";
const collectionName = "posts";
const accountCollection = client.db(dbname).collection(collectionName);

// connect to database

const connecttodatabase = async () => {
  try {
    await client.connect();
    console.log(`Connected to ${dbname} database Successfully`);
  } catch (err) {
    console.log(`Error connecting to database ${err}`);
  }
};

const samplePost = {
  name: "harsh",
  age: 19,
};

const main = async () => {
  try {
    await connecttodatabase();
    let result = await accountCollection.insertOne(samplePost);
    console.log(` id: ${result.insertedId}`);
  } catch (err) {
    console.log(err);
  } finally {
    client.close();
  }
};
main();