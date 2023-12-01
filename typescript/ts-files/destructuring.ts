
const o = {a: 1, b: 2, c: 3}; // notice we ignore c in the destructuring
const {a, b} = o; // keeping key names as variable names
const {a: x, b: y} = o; // renaming the variables

console.log(o);
console.log(a);
console.log(b);
console.log(x);
console.log(y);
