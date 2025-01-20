
const m = new Map();

// [] is an Object operator, not a Map one
console.log('***[] vs. .set()/.get()***')
m['x'] = 100;
console.log(m);         // x is a key on the object instance
console.log(m.keys());  // still no map keys
m.set('y', 100);
console.log(m);
console.log(m['y']);    // [] and .set()/.get() are totally separate ideas
console.log()

// pretending object is map and using [] like python
console.log('***[] on object to treat like map***')
const o = {};
o['x'] = 100; // in TS you would need an index signature to get away with this
o['y'] = 200;
console.log(o);
console.log(o.x);
console.log(o.y);
console.log()

// the way you get the keys is different between the two
console.log('***Object.keys() vs. m.keys()***')
console.log(Object.keys(o));  // object treated as map (only the stuff you added, not built-in stuff)
// console.log(o.keys()); // doesn't exist
console.log(Object.keys(m));  // useless for real map
console.log(m.keys()); // the real map way (not for objects)
console.log();

// Object.keys() respects inheritance but does not get Object stuff that's on everything
console.log('***Object.keys() generality***');
class MyClass {
    x = 5;
}
class MyClass2 extends MyClass {
    y = 10;
}
const n = new MyClass2();
console.log(Object.keys(n));
console.log();

// Entries and values follow the same pattern as keys in terms of splitting between maps and objects
console.log('***Entries and Values***');
console.log(Object.entries(o));
console.log(m.entries());
console.log(Object.values(o));
console.log(m.values());
console.log();

console.log('***Enumeration***');
/*for (const something of o) {
    console.log(something);
}*/ // ILLEGAL
for (const something of Object.entries(o)) {
    console.log(something); // now it's OK (key-value pairs)
}
for (const something of m) {
    console.log(something); // pair arrays
}
for (const [key, value] of m) {
    console.log(key, value); // same thing but we're destrcturing it
}
console.log();

console.log('***in testing***');
console.log('x' in m); // true because on the object
console.log('y' in m); // false because on the map
console.log();

// TypeScript
// const mymap: {[key: string]: string} = {};
// can add key-value pairs now without compiler complaining (if of right type)
