// emp = {id: 203, name: "Ramesh", salary: 400}
// console.log(emp.id + " " + emp.name + " " + emp.salary);

// var emp = new Object();
// emp.id = 101;
// emp.name = "suresh";
// emp.company = "tcs";
// emp.salary = "10000";
// console.log(emp);

// function emp(name, id, salary) {
//     this.id = id;
//     this.name = name;
//     this.salary = salary;
// }
// e = new emp("prabhoot", 1, 10000);
// console.log(e);

// Function to calculate Fibonacci sequence using memoization technique with objects

// function fibonacci(n, memo = {}) {
//     if (n in memo) {
//         return memo[n];
//     }
//     if (n <= 1) {
//         return n;
//     }
//     memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
//     return memo[n];
// }

// // Function to print Fibonacci sequence up to given number of terms
// function printFibonacciSequence(terms) {
//     if (terms <= 0) {
//         console.log("Invalid input. Number of terms should be positive.");
//         return;
//     }
//     console.log("Fibonacci Sequence:");
//     for (let i = 0; i < terms; i++) {
//         console.log(fibonacci(i));
//     }
// }

// // Test the functions
// const numberOfTerms = 10; // Change this value to the desired number of terms
// printFibonacciSequence(numberOfTerms);

var arr = ["abhishek", "babita", "coco"];
for (let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
}