const fs= require('fs');
// fs.readFile('file.txt','utf8',(err, data)=>{
//     console.log(err,data)
// }) this will not block the node to run next instruction while node is fetching the file from the address 

// to intitionally stop the node use readfilesyn instead
// const a=fs.readFileSync('file.txt')
// console.log(a.toString()) //will show buffer so change buffer to sting using tostring()

// to write(can create file if not present and overwrite the new data not append mind it)
// fs.writeFile('file2.txt',"this is to be written",()=>{
//     console.log("this is to be written")
// })
fs.writeFileSync('file2.txt',"added by statement two enjoy !!")
console.log("finished reading files")