const Todo = require("../models/Todo");

exports.getTodo=async(req,res)=>{
    try {
        const response=await Todo.find({});// i forget to add await
        res.status(200).json({
            success:true,
            data:response,
            message:"All TODOS fetched Successfully"
        })
    } catch (error) {
        console.error(error);
        res.status(500).json({
            success:false,
            data:"Error from Server",
            message:error.message
        })
    }
}
exports.getTodoById=async(req,res)=>{
    try{
        const id=req.params.id;
        const response=await Todo.find({_id:id});
        if(!response){
            return res.status(404).json({
                success:false,
                message:"not such data found"}
            )
        }else{
            res.status(200).json({
                success:true,
                data:response,
                message:`Successfully got data for Id ${id}`
            })
        }

    }catch(error){
        console.error(error);
        res.status(500).json({
            success:false,
            data:"server Error",
            message:error.message
        })
    }
}