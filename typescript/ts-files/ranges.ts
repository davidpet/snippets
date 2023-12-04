
const a = [1, 2, , , 5];
console.log(Array.from(a.keys()));
console.log(Object.keys(a));

const firstTen = Array.from(new Array(10).keys());
console.log(firstTen);
