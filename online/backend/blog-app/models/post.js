const mongoose=require("mongoose");
require("dotenv");
const date=Date.now()+(5.5 * 60 * 60 * 1000);
const postSchema=mongoose.Schema({
    title: { type: String, required: true, maxLength: 50 },
    description: { type: String, required: true, maxLength: 50 },
    likes:[{type:mongoose.Schema.Types.ObjectId,ref:"likes"}],
    comments:[{type:mongoose.Schema.Types.ObjectId,ref:"comments"}],
    createdAt: { type: Date, required: true, default: date },
    updatedAt: { type: Date, required: true, default: date }
})

module.exports=mongoose.model("posts",postSchema);