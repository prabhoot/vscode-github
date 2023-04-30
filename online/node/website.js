const fs = require('fs');
const http=require('http')
const port=process.env.PORT || 3000;
server=http.createServer((req,res)=>{
    res.setHeader('Content-Type','text/html')
    console.log(req.url)
    if(req.url=='/'){
        res.statusCode=200;
        res.end('<h1> This is prabhoot</h1>')
    }
    else if(req.url=='/intro'){
        res.statusCode=200;
        res.end('<h1> you are at the introduction section</h1>')
    }
    else if(req.url=='/hello'){
        res.statusCode=200;
        const data=fs.readFileSync('main.html')
        res.end(data.toString());
    }
    else{
        // res.pn();
        res.code=404;
        res.end('<h1> page not found </h1><br> <p>error 404 not found</p>')
    }
})

server.listen(port,()=>{
    console.log(`listening at port ${port}`)
})