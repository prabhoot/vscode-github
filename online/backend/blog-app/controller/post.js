const blog = require("../models/post")

exports.posts = async (req, res) => {
    try {
        const response = await blog.find({});
        res.status(200).json({
            success: true,
            data: response,
            message: "Data fetch successful",
        })
    } catch (error) {
        console.error(error);
        res.status(500).json({
            success: false,
            data: "ERROR fetching data",
            message: error.message,
        })
    }
}
exports.createPost = async (req, res) => {
    try {//forget to add await.
        const {title, author, description} = req.body;
        const response = await blog.create({title, description, author});
        res.status(200).json({
            success: true,
            data: response,
            message: "Data ADDED successfully",
        })
    } catch (error) {
        console.error(error);
        res.status(500).json({
            success: false,
            data: "ERROR POSTING data",
            message: error.message,
        })
    }
}
