
const express = require('express')
const app = express()
const port = 3000
app.get('/', (req, res) => {
  res.send('Hello World!')
})
app.get('/hello', (req, res) => {
    res.send('Hello prabhoot !!')
    res.download("express_app.js")  
})
app.get('/intro', (req, res) => {
    // res.sendStatus(500); 
    res.sendFile('./main.html');
  })  
app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})


// to make a file download
// res.download('express.js')
