
const a = [[1, 2], [3, 4]];
console.log(a);

console.log(a.flat()); // returns a flattened copy
console.log(a);

console.log([[[1]], 2].flat()); // only 1 level

// repeating an array 5 times
console.log((new Array(5)).fill([1, 2, 3, 4, 5]).flat());
