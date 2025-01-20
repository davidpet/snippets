
import x from './importable6';
console.log(x); // hi
//console.log(theX);

import {x as theX} from './importable7'; // importing 7 (if hoisted, this should output first)
console.log(theX); // 0

export { x as x}; // just here to make sure it's interpretted as a module
