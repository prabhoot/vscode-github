const { MongoClient } = require("mongodb");
const uri = require("./atlas_uri");
console.log(uri);

const client = new MongoClient(uri);
const dbname = "blog";
const collection_name="posts";
const account_collection=client.db(dbname).collection(collection_name);


//connect to database
const connecttodatabase = async () => {
  try {
    await client.connect();
    console.log(`Connected to the ${dbname} Database Successfully`);
  } catch (err) {
    console.log(`Error connecting to the Database ${err}`);
  }
};

// const sampleBlog={
//   name:"sahil",age:22
// }

const main = async () => {
  try {
    await connecttodatabase();
    const databasesList = await client.db().admin().listDatabases();
    databasesList.databases.forEach(db => console.log(`-${db.name}`));

    // let result=await account_collection.insertOne(sampleBlog);
    // console.log(`the sample is inserted successfully ID: ${result.insertedId}`);
  } catch (err) {
    console.error(`Error connecting to the ${dbname} Database ${err}`);
    // console.error(`Error inserting sample: ${err}`);
  } finally {
    await client.close();
  }
};
main();
