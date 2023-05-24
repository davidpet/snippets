
// These are all exported (so become public).
export const x = 5;
export let y = 10;
export class MyClass {}
export function f() {}
export interface i {}

// This is supposed to work but doesn't.
//export type MyOtherClass = MyClass;

// These are not exported.
// They still exist, but they cannot be
// seen by the importing code directly.
const inner_x = 100;
function inner_f() {}
