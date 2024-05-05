const express=require('express');
const router=express.Router();

const {deleteTodo}=require("../controllers/deleteTodo");
router.delete('/deleteTodo/:id',deleteTodo)

module.exports=router;// i forget to export it.