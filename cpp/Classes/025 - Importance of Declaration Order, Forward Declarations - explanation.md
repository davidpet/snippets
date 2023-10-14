# Importance of Declaration Order/Forward Declarations
In this code snippet, we have two classes, `A` and `B`. Class `A` has a member function `doSomething` that takes an object of class `B` as a parameter, and class `B` has a member function `doSomething` that takes an object of class `A` as a parameter. This is a circular dependency situation, where each class depends on the other.

In C++, the compiler needs to know the size of the objects it's dealing with, so it needs to see the full declaration of a class before it can be used. This is why we can't just declare class `A` and class `B` in any order. If we tried to declare class `A` first without the forward declaration of class `B`, the compiler would complain that it doesn't know what `B` is when it encounters the `doSomething` function.

The solution to this problem is to use a forward declaration. A forward declaration is a declaration of an identifier (class, function, etc.) before its actual definition. In this case, we forward declare class `B` before class `A`, so when the compiler encounters the `doSomething` function in class `A`, it knows that `B` is a class, even though it hasn't seen the full declaration of `B` yet.

After the forward declaration of `B`, we can declare class `A` and then class `B`. After both classes have been declared, we can define the `doSomething` function of class `A` that uses class `B`.

In the `main` function, we create objects of class `A` and `B`, and then call the `doSomething` function of class `A` with the object of class `B` as a parameter. This sets the `a` member variable of the `A` object to 10, which is then printed out.