
console.log('fill whole array');
let a = [1, 2, 3, 4, 5];
a.fill(100);
console.log(a);

console.log('fill end of array');
a = [1, 2, 3, 4, 5];
a.fill(100, 2);
console.log(a);

console.log('fill region of array');
a = [1, 2, 3, 4, 5];
a.fill(100, 2, 3); // exclusive upper bound
console.log(a);

console.log('fill beyond end of array - rejected');
a = [1, 2, 3, 4, 5];
a.fill(100, 2, 10);
console.log(a);

console.log('return value of fill');
a = [1, 2, 3, 4, 5];
a = a.fill(100, 2);
console.log(a);

console.log('new filled array');
const b: number[] = new Array(5).fill(100);
console.log(b);
