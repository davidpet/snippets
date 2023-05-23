
class Person {
  name: string;
  age: number;

  constructor(name: string, age: number) {
    this.name = name;
    this.age = age;
  }

  sayHello() {
    console.log(`Hello, my name is ${this.name} and I'm ${this.age} years old.`);
  }
}

const person = new Person("John Doe", 25);
person.sayHello(); // Output: Hello, my name is John Doe and I'm 25 years old.
                
console.log(person.name)
