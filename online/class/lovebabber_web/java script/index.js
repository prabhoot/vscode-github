// // since we are using objects so it is object oriented program.
// console.log("hello")
// // lets create an Object

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
