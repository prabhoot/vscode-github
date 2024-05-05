const express=require('express');
const app=express();

const bodyParser=require('body-parser');
app.use(bodyParser.json());
var x=3000

app.listen(x,()=>{
    console.log(`app is running on port: ${x}`);
})