
console.log('start');

const p = import('./importable7');
p.then(r => console.log(r.x)); // 0 (named export)

async function f() {
    const s = await import('./importable6');
    console.log(s.default); // hi (default export)
}
f();

async function g() {
    const {x} = await import('./importable7'); // slight similarity to top-level imports!
    console.log(x); // 0
}
g();

console.log('done'); // this runs before any promises resolve
