const express=require("express");
const {posts, createPost} = require("../controller/post");
const router=express.Router();

router.get('/posts',posts);
router.post('/posts/create',createPost);

module.exports=router;