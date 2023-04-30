// const eventemitter = require ('events');
// class myemitter extends eventemitter {}
// const me = new myemitter();

// u can use both format both are working

const ee = require ('events');
const me = new ee();

me.on('waterfull',()=>{
    console.log('please turn off the motor')
    setTimeout(()=>{
        console.log('gental remainder');
    },3000)
})

console.log("the code is running")
me.emit('waterfull')
console.log("the code is still running")