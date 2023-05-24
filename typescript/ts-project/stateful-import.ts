
import {x, y, m, n} from './importable7';
import {wrapper} from './importable8';

// Notice all the a's inside objects were changed to 200 together.
// This means that object references that are imported are shared
// state between all the places that import it.
console.log(x);
console.log(y);
console.log(m);
console.log(n);
console.log(wrapper);

// Also notice that the console.log from importable7
// was only called once.  It is not called again each
// time it is imported.
