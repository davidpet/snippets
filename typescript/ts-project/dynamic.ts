
console.log('start');

const p = import('./importable7');
p.then(r => console.log(r.x)); // 0 (named export)

async function f() {
    const s = await import('./importable6');
    console.log(s.default); // hi (default export)
}
f();

console.log('done'); // this runs before any promises resolve
