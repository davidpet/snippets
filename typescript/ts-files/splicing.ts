
// Split array
let a = [1, 2, 3, 4, 5];
let b = a.splice(2);
console.log('splitting');
console.log(a);
console.log(b);

// Removing from middle
a = [1, 2, 3, 4, 5];
b = a.splice(2, 2);
console.log('removing from middle')
console.log(a);
console.log(b);

// Replacing
a = [1, 2, 3, 4, 5];
b = a.splice(2, 2, 100, 200, 300);
console.log('replacing in middle');
console.log(a);
console.log(b);

// Inserting
a = [1, 2, 3, 4, 5];
b = a.splice(2, 0, 100, 200, 300);
console.log('inserting');
console.log(a);
console.log(b);

// Negative index
a = [1, 2, 3, 4, 5];
b = a.splice(-2);
console.log('negative index');
console.log(a);
console.log(b);

// Immutability
a = [1, 2, 3, 4, 5];
b = (a as any).toSpliced(2, 2); // 'any' only required due to TS for some reason
console.log('immutability');
console.log(a);
console.log(b);
