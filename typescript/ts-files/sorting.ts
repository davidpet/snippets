
const a = [1, 2, 3, 11];
console.log((a as any).toSorted()); // TS doesn't see toSorted() here for some reason
a.sort();
console.log(a);

a.sort((a, b) => a - b);
console.log(a);

const b = a.map(n => String(n));
console.log(b);
// b.sort((a, b) => a - b);
b.sort((a, b) => a < b ? -1 : b < a ? 1 : 0); // comparison supported but not subtraction for string
console.log(b);
