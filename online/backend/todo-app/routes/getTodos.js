const express=require("express");
const router=express.Router();

const {getTodo,getTodoById}=require("../controllers/getTodos");
router.get('/getTodos',getTodo);
router.get('/getTodos/:id',getTodoById);
module.exports=router;