// // since we are using objects so it is object oriented program.
// console.log("hello")
// // lets create an Object

const {log} = require("console");
const {CHAR_NO_BREAK_SPACE} = require("picomatch/lib/constants");

// let rectangle = {
//     //to add properties
//     length: 1,
//     breadth: 2,
//     // to add behaviour
//     draw: function () { // it is a method 
//         console.log("draw")
//     }
// };

// console.log(rectangle.draw) // we can print the whole function.
// console.log(rectangle.draw()) // we can print the output of the function as it calls the function

// //by using dot(.) we can access the properties and the methods of an object.

// //now creating an object using factory function
// function create_rectangles(a, b) {
//     return rectangle = {
//         length: a,
//         breadth: b,
//         draw() {console.log("draw")}
//     };
// }
// console.log(create_rectangles(3, 4))

// // also we can first create an object then easly return it as shown

// function create_rectangles(a, b) {
//     rectangle = {
//         length: a,
//         breadth: b,
//         draw() {console.log("draw")}
//     };
//     return rectangle;
// }
// console.log(create_rectangles(3, 4))

// //now using constructor function
// function make_rectangles(a, b) {
//     this.length = a;
//     this.breadth = b;
//     this.draw = function () {
//         console.log("drawing")
//     }
// }



// let a = new make_rectangles(20, 10);
// console.log(a);
// a.color="yellow"//added a new object 
// console.log(a);
// delete a.color;//deleted the object 
// console.log(a);

// cloning in js
// 1.iltration

// let src={
//     a:10,
//     b:20,
// }
// let des={}
// for (let i in src){
//      des[i]=src[i]
// }
// console.log(des)

// 2. assign :
// let src = {
//     a: 10,
//     b: 20,
// }
// let dest = Object.assign({}, src)
// console.log(dest)

// 3.spread 
// src = {
//         a: 10,
//         b: 20,
//     }
//     let dest={...src}
//     console.log(dest)
//     src.a++
//     console.log(src)
//     console.log(dest)

//arrays
// console.log(n.sort((a,b)=>{return a-b}))
// console.log(n.sort((a,b)=>b-a))
// n.push(23)
// n.unshift(2)
// n.reverse()

// console.log(n.every(x=> x<0))
// console.log(n.filter(x=>x<50))
// n=n.join('_')
// console.log(n)

//Objects
// let rectangle={
//     length:1,
//     breadth:3
// }
// console.log(rectangle)
// function change (a,b){
//    return rectangle={
//     length:a,
//     breadth:b
// }
// }

// function change(a,b){
//     this.dimension={
//         length:2,
//         breadth:3,
//     }
// }
// let a= new change(3,3)
// console.log()

// console.log(change(0 ,0))

// function sum(){
//     let total =0;
//     for (let i of arguments){
//         total+=i;
//     }
//     console.log(total)
// }

// sum(1,2,3,4)

let person = {
    fname: "prabhoot",
    lname: "patel",
    get print_name() {
         console.log(`${person.fname} ${person.lname}`)
    },
    set print_name(value) {
        let data = value.split(" ")
        this.fname = data[0];
        this.lname = data[1];
        console.log(`${person.fname} ${person.lname}`)
    }
}
person.print_name
person.print_name ="harsh mishra"
