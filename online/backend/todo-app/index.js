/*
-2.package.json (write a dev script using nodemon) and install all the req. dependencies
-1.env-> (contain PORT, DATABASE_URL);
0.config->database.js (provide dbConnect function that connects to DB)
1.models-> Todo.js (schema of data)
2.controller->createTodo.js (to define functionality of particular route)
3.routes-> Todos.js (to create multiple router and link with their controller)
4.index.js (to link all the other files)
 */

const express = require("express");
const app = express();

//  to load .env to process we use dotenv
require("dotenv").config();

const PORT = process.env.PORT || 4000

// parser to read data (two ways)

//// const bodyParser=require('body-parser');
//// app.use(bodyParser.json());
app.use(express.json());

// to import routes
const todoRoutes = require("./routes/todos");
app.use("/api/v1", todoRoutes);// will be added in the api.
const getTodo = require("./routes/getTodos");
app.use("/api/v1", getTodo);// will be added in the api.
const updateById=require("./routes/updateById");
app.use("/api/v1",updateById);
const deleteTodo=require("./routes/deleteTodo");
app.use("/api/v1",deleteTodo);


// start server
app.listen(PORT, () => {
    console.log(`server started at ${PORT}`);
})
//connect to database
const dbConnect=require("./config/database");
dbConnect();

//default route
app.get("/",(req,res)=>{
    res.send("hi");
})