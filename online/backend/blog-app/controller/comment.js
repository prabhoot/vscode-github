const blog = require("../models/post");
const date = Date.now() + (5.5 * 60 * 60 * 1000);
exports.createComment = async (req, res) => {
    try {
        const {id} = req.params;
        const {comment} = req.body;
        const response = await blog.findByIdAndUpdate({_id: id}, {
            comment: comment,
            updatedAt: date
        })
        res.status(200).json({
            success: true,
            data: response,
            message: "comment updated successfully",
        })
    } catch (error) {
        console.error(error).json({
            success: false,
            data: "Comment update failed",
            message: error.message
        })
    }
}
exports.getComment = async (req, res) => {
    try {
        const {id} = req.params;
        const response = await blog.find({_id: id});
        res.status(200).json({
            success: true,
            data: response,
            message: `found data with id ${id}`,
        })
    } catch (error) {
        console.error(error).json({
            success: false,
            data: `Error finding data with id ${id}`,
            message: error.message
        })
    }
}
