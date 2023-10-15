# Friends

Friends are entities that can access private members of a class.

There are 3 main scenarios shown here:
1. Declare a whole class as being a friend of the class (`friend class TheClass`).
1. Declare a function as being a friend of the class (`friend void f()`).
1. Actually define a function inside the class as a friend which makes it external but a friend.

The last case is weird but it makes sense for things like operator overloading on a stream. The function is defined like a method with the `friend` keyword which basically turns it into an external method (can't even be called using the class like a static method).  To actually call the method from outside, you have to define a prototype for it somewhere.  The exception to that is if it's an operator that automatically gets found without you having to do that.

Note: a class can automatically access private members of another instance of the same class, effectively making it a friend too.
