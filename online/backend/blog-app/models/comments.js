const mongoose=require("mongoose");
require("dotenv");
const date=Date.now()+(5.5 * 60 * 60 * 1000);
const commentSchema=mongoose.Schema({
    post:{type:mongoose.Schema.Types.ObjectId,ref:"posts"},
    user:{type:String,required:true},
    description:{type:String,required:true,maxLength:50},
    createdAt: { type: Date, required: true, default: date },
    updatedAt: { type: Date, required: true, default: date }
})

module.exports=mongoose.model("comments",commentSchema);