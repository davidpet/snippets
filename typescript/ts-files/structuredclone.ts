
const o = {a: [1, 2, 3], b: new Set(), c: new Map(), d: {e: 100}};
const c = structuredClone(o);

console.log('original', o);
console.log();

console.log('clone', c);
console.log();

c.a[1] = 100;
c.a.push(4);
c.b.add('hi');
c.c.set('hi', 100);
c.d.e = 1000;

console.log('modified clone', c);
console.log();

console.log('original after clone modified', o);
