// this is use to connect database to the node.js application using mongoose
const mongoose=require("mongoose");
// to feed .env to the process object we use dotenv library...
require('dotenv').config();

const dbConnect=()=>{
   mongoose.connect( process.env.DATABASE_URL)//,{useNewUrlParser:true,useUnifiedTopology:true}
   .then(()=>{console.log("DB connection successful")})
   .catch((error)=>{console.log("error to DB connection");
                    console.error(error);
                    process.exit(1);
    })
}

module.exports=dbConnect;// way to export files in backend