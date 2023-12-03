
const stack: number[] = [];
stack.push(1);
stack.push(2);
stack.push(3);
stack.push(4, 5, 6);
console.log(stack);
console.log(stack.pop());

const queue: number[] = [];
queue.unshift(1);
queue.unshift(2);
queue.unshift(3);
queue.unshift(4, 5, 6); // opposite of what you might expect
console.log(queue);
console.log(queue.shift());

const queue2: number[] = [];
queue2.push(1, 2, 3, 4, 5, 6); // more intuitive than the unshift version
console.log(queue2);
console.log(queue2.shift());

const stack2: number[] = [];
console.log(stack2.pop());
