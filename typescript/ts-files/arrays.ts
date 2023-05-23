
// Array declaration and initialization
const numbers: number[] = [1, 2, 3, 4, 5];
const fruits: Array<string> = ['apple', 'banana', 'orange'];

// Accessing array elements
console.log(numbers[0]); // Output: 1
console.log(fruits[1]); // Output: banana

// Modifying array elements
numbers[2] = 10;
fruits[0] = 'pear';

// Array length
console.log(numbers.length); // Output: 5
console.log(fruits.length); // Output: 3

// Array methods
numbers.push(6); // Add an element to the end
fruits.pop(); // Remove the last element
const slicedNumbers = numbers.slice(1, 4); // Slice elements from index 1 to 3
console.log(slicedNumbers)

// Iterating over arrays
for (let i = 0; i < numbers.length; i++) {
  console.log(numbers[i]);
}

for (const fruit of fruits) {
  console.log(fruit);
}

numbers.forEach((num) => {
  console.log(num);
});

// Array spread operator
const combinedArray = [...numbers, ...fruits];

// Array destructuring
const [firstNumber, secondNumber, ...restNumbers] = numbers;
const [firstFruit, ...restFruits] = fruits;

// Array filtering and mapping
// Notice you don't need to convert back to array unlike Python
const evenNumbers = numbers.filter((num) => num % 2 === 0);
const doubledNumbers = numbers.map((num) => num * 2);
console.log(evenNumbers)

// Multidimensional arrays
const matrix: number[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]];
const value = matrix[1][2]; // Accessing element at row 1, column 2
