const express = require('express')
// const cors = require('cors');
const { db } = require('./config/db');
// const {signup} = require('./controller/auth');
const app = express()

require('dotenv').config()

const PORT = process.env.PORT ||5050
// const CORS_URL=process.env.CORS_URL
//middlewares
app.use(express.json())
// app.use(cors(CORS_URL))

const signup=require("./routes/user/signup");
const login=require("./routes/user/login");

//routes
app.use("/api/v1",login);
app.use("/api/v1",signup);
const server = () => {
    db()
    app.listen(PORT, () => {
        console.log('listening to port:', PORT)
    })
}

server()