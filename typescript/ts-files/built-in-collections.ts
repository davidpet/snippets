
// Array
const numbers: number[] = [1, 2, 3, 4];
const fruits: string[] = ["apple", "banana", "orange"];

// Tuple
const person: [string, number] = ["John", 30];

// Set
const uniqueNumbers: Set<number> = new Set([1, 2, 3, 4]);

// Map
// Notice no {} like Python
// because that means Object
const studentGrades: Map<string, number> = new Map([
["Alice", 90],
["Bob", 85],
["Charlie", 92],
]);

// Object
const personDetails: { name: string, age: number } = { name: "John", age: 30 };

// ReadonlyArray
const readOnlyNumbers: ReadonlyArray<number> = [1, 2, 3, 4];

console.log(numbers);
console.log(fruits);
console.log(person);
console.log(uniqueNumbers);
console.log(studentGrades);
console.log(personDetails);
console.log(readOnlyNumbers);
