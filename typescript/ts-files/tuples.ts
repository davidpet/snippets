
// A key difference from Python is they look like arrays
// but have types inside instead of outside.
// You cannot ommit the [] or use () intead like in
// Python.

// Tuple declaration and initialization
let tuple1: [string, number] = ['apple', 5];
let tuple2: [string, boolean, number] = ['banana', true, 10];

// Accessing tuple elements
console.log(tuple1[0]); // Output: apple
console.log(tuple2[1]); // Output: true

// Modifying tuple elements
tuple1[1] = 8;
tuple2[0] = 'orange';

// Tuple length
console.log(tuple1.length); // Output: 2
console.log(tuple2.length); // Output: 3

// Destructuring tuples
const [fruit, hasStock, quantity] = tuple2;
console.log(fruit); // Output: orange
console.log(hasStock); // Output: true
console.log(quantity); // Output: 10
