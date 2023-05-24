
export {message, MyClass};
export {MyClass as MyType}; // altenrate name for consumers

const message = 'hi';

class MyClass {
    speak() {
        console.log('hi')
    }
}
