const mongoose=require("mongoose");
const likeSchema=mongoose.Schema({
    post:{type:mongoose.Schema.Types.ObjectId,ref:"posts"},
    user:{type:String,required:true}
})

module.exports=mongoose.model("likes",likeSchema);