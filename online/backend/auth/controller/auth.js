const bcrypt=require("bcrypt");
const User=require("../models/User");

exports.signup=async(req,res)=>{
    try{
        const {name,email,password,role}=req.body;
        const existingUser= await User.findOne({email});
        if(existingUser){
            return res.status(400).json({
                success:false,
                message:'User already exist'
            });
        }
        // hash password
        let hashedPassword;
        try {
            hashedPassword=await bcrypt.hash(password,10);//10 is rounds.

        } catch (error) {
            return res.status(500).json({
                success:false,
                message:"Error in hashing"
            });
        }
        const user=await User.create({name,email,password:hashedPassword,role})
        return res.status(200).json({
            success:true,
            message:'User Created Successfully'
        })
    }
    catch (error){
        console.log(error);
        return res.status(500).json({
            success:false,
            message:'User cannot be registered, plz try again later'
        })
    };
};