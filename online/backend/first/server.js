// instantiation
const express = require('express');
const app = express();
// body parse used as a middleware to parse the body data.
const {default: mongoose} = require('mongoose');
const bodyParser = require('body-parser');
app.use(bodyParser.json());
// now we have to listen it.
app.listen(3000, () => {
    console.log("server started at port 3000");
})
app.get('/', (req, res) => {
    res.send("hi prabhoot");
})
// to test post use postman
app.post('/api/car', (req, res) => {
    const {id, name} = req.body;
    console.log("id is : " + id + " name is: " + name);
    res.send("data is posted successfully");
})
mongoose.connect('mongodb://localhost:27017/myDatabase')
    .then(() => {console.log("Connection Successful")})
    .catch(() => {console.log("ERROR Connecting Database.")});

// there is a dev script in the package.json file
//use npm run dev to start server.js using nodemon.