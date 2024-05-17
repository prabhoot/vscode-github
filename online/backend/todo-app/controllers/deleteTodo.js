const Todo =require("../models/Todo")// i made a mistake hear as well
exports.deleteTodo=async(req,res)=>{
    try {
        const {id}=req.params;
        const response= await Todo.findByIdAndDelete(id);
        res.status(200).json({
            success:true,
            data:response,
            message:`todo deleted with id ${id}`
        })
    } catch (error) {
        console.error(error);
        res.status(500).json({
            success: false,
            data: "internal server error",
            message: error.message
        })
    }
}