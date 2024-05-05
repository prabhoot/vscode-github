const mongoose = require("mongoose");

const todoSchema = new mongoose.Schema({
    title: { type: String, required: true, maxLength: 50 },
    description: { type: String, required: true, maxLength: 50 },
    createdAt: { type: Date, required: true, default: Date.now()+(5.5 * 60 * 60 * 1000) },
    updatedAt: { type: Date, required: true, default: Date.now()+(5.5 * 60 * 60 * 1000) }
});

module.exports = mongoose.model("Todo", todoSchema);
