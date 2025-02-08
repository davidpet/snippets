
const m = {};
m.self = m;

console.log(m); // detects the cycle
// console.log(JSON.stringify(m)); // ILLEGAL
const n = structuredClone(m);
console.log(n); // detects the cycle again
console.log(n.self === n); // circular reference is duplicated properly
console.log();

for (let i = 0; i < 1000; i++) {
    const o = m.self;
    // if this wasn't potentially infinite, this would fail on the 2nd iteration
    if (!o) {
        console.log('FAIL!');  // never prints
    }
}
