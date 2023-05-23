
// Notice that unlike Python and C++, but like Java,
// you cannot use [] for maps.  You have to use 
// get, set, has, etc.

// Map declaration and initialization
const myMap = new Map<number, string>();

// Adding elements to the Map
myMap.set(1, 'apple');
myMap.set(2, 'banana');
myMap.set(3, 'orange');

// Accessing elements in the Map
console.log(myMap.get(2)); // Output: banana

// Checking if a key exists in the Map
console.log(myMap.has(3)); // Output: true

// Default value
console.log(myMap.get(4) || 'fakefruit')

// Removing an element from the Map
myMap.delete(1);

// Iterating over the Map
for (const [key, value] of myMap) {
  console.log(`Key: ${key}, Value: ${value}`);
}

// Map size
console.log(myMap.size); // Output: 2

// Clearing the Map
myMap.clear();
