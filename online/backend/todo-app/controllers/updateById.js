const Todo = require("../models/Todo");

exports.updateById = async (req, res) => {
    try {
        const {id} = req.params;// const id= req.params;
        const {title, description} = req.body;
        const response = await Todo.findByIdAndUpdate( // i forget await again.
            {_id: id},
            {
                title: title,
                description: description,
                updatedAt: Date.now()+(5.5 * 60 * 60 * 1000),//5.5 hr offset for india
            }
        )
        res.status(200).json({
            success: true,
            data: response,
            message: "data updated successfully",
        })
    } catch (error) {
        console.error(error).json({
            success: false,
            data: "server error",
            message: error.message
        })
    }
}