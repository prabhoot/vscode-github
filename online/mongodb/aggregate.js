const {MongoClient} = require("mongodb");
const uri = require("./atlas_uri");
const client = new MongoClient(uri);

const dbname = "sample_training";
const collectionName = "zips";
const accountCollection = client.db(dbname).collection(collectionName);

const connecttodatabase = async () => {
  try {
    client.connect();
    console.log("Connected");
  } catch (err) {
    console.log(err);
  }
};
const pipeline = [
  {$match: {state: "CA"}},
  // {$group: {_id: "$city",count:{$sum:1},totalzip:{$count:{}}}},
  // {$sort: {zip: 1}},
  {$limit: 3},
  {
    $set: {
      pop_2022: {$round: {$multiply: [1.0031, "$pop"]}}
    }
  },
  {
    $project: {
      state: 1,
      zip: 1,
      population: "$pop",
      pop_2022: 1,
      _id: 0
    }
  },
  {$out: "small_state"}
]
const main = async () => {
  try {
    connecttodatabase();
    let results = accountCollection.aggregate(pipeline);

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
