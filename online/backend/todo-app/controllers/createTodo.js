// define route handler
const Todo = require("../models/Todo");

exports.createTodo = async (req, res) => {
    try {
        //get data form req ki body then create and put obj in db send a json success flag
        const {title, description} = req.body;
        const response = await Todo.create({title, description});
        res.status(200).json({
            success: true,
            data: response,
            message: "Data created successfully"
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
