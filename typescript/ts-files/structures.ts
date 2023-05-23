
// Sort of like C syntax but with an = sign and ;
type Person = {
  name: string;
  age: number;
};

const person: Person = {
  name: "John Doe",
  age: 25
};

console.log(person.name); // Output: John Doe
console.log(person.age); // Output: 25
    
// Alternative syntax
// equivalent in this case
// no = or ;
interface Person2 {
    name: string;
    age: number;
}

const person2: Person = {
    name: "John Doe",
    age: 25
};
