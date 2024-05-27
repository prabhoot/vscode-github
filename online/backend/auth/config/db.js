const mongoose=required(mongoose);

require("dotenv").config();

exports.connect=()=>{
    mongoose.connect(process.env.URL)
    .then(()=>{console.log("done db connection")})
    .catch((error)=>{console.log("error DB connection");
    process.exit(1);
})

}