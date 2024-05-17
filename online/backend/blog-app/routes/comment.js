const express=require("express");
const {createComment,getComment} = require("../controller/comment");
const router=express.Router();

router.put('/comments/create/:id',createComment);
router.get('/comments/:id',getComment);

module.exports=router;