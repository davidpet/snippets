
// This is provided just to show.
// It is mostly only for working with older code or
// for interfacing with JS libraries where you need it.
// import/export are the preferred way now.

  // Declare a module using the 'module' keyword
  module MyModule {
    // Declare a variable inside the module
    export const myVariable: string = 'Hello, module!';
  
    // Declare a function inside the module
    export function myFunction(): void {
      console.log(myVariable);
    }
  
    // Declare a nested module
    export module SubModule {
      // Declare a class inside the nested module
      export class MyClass {
        constructor(private arg: string) {}
  
        // Declare a method inside the class
        public method(): void {
          console.log(`Argument: ${this.arg}`);
        }
      }
    }
  }
  
  // Access the module's variable, function, and class
  console.log(MyModule.myVariable);
  MyModule.myFunction();
  const myInstance = new MyModule.SubModule.MyClass('example');
  myInstance.method();
