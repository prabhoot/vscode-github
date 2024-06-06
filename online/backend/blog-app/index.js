/*
-2.package.json (write a dev script using nodemon) and install all the req. dependencies
-1.env-> (contain PORT, DATABASE_URL) && .gitignore of nodemodules;
0.config->database.js (provide dbConnect function that connects to DB)
1.models-> Todo.js (schema of data)
2.controller->createTodo.js (to define functionality of particular route)
3.routes-> Todos.js (to createPost multiple router and link with their controller)
4.index.js (to link all the other files)
 */

const express=require("express");
const app=express();

require("dotenv").config();// i forget to add .config at the end.

const PORT=process.env.PORT || 4000 ;

const bodyParser=require("body-parser");
const dbConnect = require("./config/database");
app.use(bodyParser.json());
////app.use(express.json());
const posts=require("./routes/post");
const createPost=require("./routes/post");
const createComment=require("./routes/comment");
const getComment=require("./routes/comment");
app.use("/api/v1",posts);
app.use("/api/v1",createPost);
app.use("/api/v1",createComment);
app.use("/api/v1",getComment);

app.listen(PORT,()=>{
    console.log(`server started at ${PORT}`);
})

dbConnect();