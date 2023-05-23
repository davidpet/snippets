
// Note that a string is a collection of strings
// rather than having a special char type.

const str: string = 'Hello, world!';

// Length
console.log(str.length); // Output: 13

// Accessing characters
console.log(str[0]); // Output: 'H'
console.log(str.charAt(1)); // Output: 'e'

// Substring
console.log(str.substring(7, 12)); // Output: 'world'
console.log(str.slice(7, 12)); // Output: 'world'

// Splitting into an array
const arr: string[] = str.split(', ');
console.log(arr); // Output: ['Hello', 'world!']

// Iterating over characters
for (const char of str) {
  // char is a string, not a special char type
  console.log(char); // Output: 'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!'
}

str.split('').forEach((char: string) => {
  console.log(char); // Output: 'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!'
});
