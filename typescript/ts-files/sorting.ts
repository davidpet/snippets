
const a = [1, 2, 3, 11];
console.log((a as any).toSorted()); // TS doesn't see toSorted() here for some reason
a.sort();
console.log(a);

a.sort((a, b) => a - b);
console.log(a);
