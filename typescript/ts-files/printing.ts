
const o = {
  x: 100,
  toString() {return this.x;}
};
console.log(o); // doesn't use

const a = [o, o, o]; // doesn't use
console.log(a); // doesn't use

console.log(o.toString()); // uses
console.log(a.toString()); // uses
