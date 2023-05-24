
import * as stuff from './importable3';

console.log(stuff);

// I'm not sure why the interface and type don't print,
// but they work too.
// They must be excluded from toString on purpose for
// some reason.
const myI: stuff.i = {}
//const point: MyOtherClass = {};
