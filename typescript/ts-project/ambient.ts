
  // This is only here for demonstration.
  // If you try to run the file, it will
  // fail because there are no defintions
  // for the ambient declarations here.

  // Declare an ambient variable
  declare const myVariable: string;

  // Declare an ambient function
  declare function myFunction(arg: number): void;

  // Declare an ambient class
  declare class MyClass {
    constructor(arg: string);
    method(): void;
  }

  // Use the ambient variable, function, and class
  console.log(myVariable);
  myFunction(42);
  const myInstance = new MyClass('example');
  myInstance.method();
