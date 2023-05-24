
import * as wrapper from './importable7';
import {x, m} from './importable7';

// These are illegal, you can't directly assign
// an import variable.
//wrapper.x = 100;
//x = 100;

// These are legal - imported variables are
// references to living objects.
wrapper.m.a = 100;
m.a = 200;

export {wrapper};
