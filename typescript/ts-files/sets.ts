
// Notice that unlike in Python, you cannot
// use {} for set literals.

const mySet = new Set<number>();

mySet.add(1);
mySet.add(2);
mySet.add(3);
mySet.add(3); // noop

console.log(mySet.size); // Output: 3
console.log(mySet.has(2)); // Output: true

mySet.delete(2);
console.log(mySet.size); // Output: 2

mySet.forEach((value) => {
  console.log(value);
});
