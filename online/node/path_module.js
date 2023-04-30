const path=require('path')
console.log(path.basename('C:\\temp\\myfile.html'))
console.log(path.dirname('C:\\temp\\myfile.html'))
// output is full stop indicating the same directory 
console.log(__filename);// working file address 
console.log(path.extname(__filename));// returns extension of working file
