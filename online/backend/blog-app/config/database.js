const mongoose=require("mongoose");
require("dotenv").config();
const dbConnect=()=>{
    mongoose.connect(process.env.DATABASE_URL)
    .then(()=>{
        console.log("connected to DB successfully!");
    })
    .catch((error)=>{
        console.log(`error connecting to DB ${error}`);
        process.exit(1);
    })
}
module.exports=dbConnect;