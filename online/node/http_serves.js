const http=require('http');
const port=process.env.PORT||3000;
const server=http.createServer((req,res)=>{//request and response
    console.log(req.url)
    res.statusCode=200;
    res.setHeader('Content-Type','text/html')
    res.end('<h1>hi</h1><p>ye bhi theek se aa gaya.</p>')

})

server.listen(port,()=>{
    console.log(`server is listening on the post ${port}`)
});