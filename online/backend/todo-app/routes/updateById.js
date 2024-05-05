// get express router
const express=require("express");
const {updateById} = require("../controllers/updateById");
const router=express.Router();

router.put("/updateById/:id",updateById);

module.exports=router;
