# Structural typing
In the above code, we have two classes `Duck` and `NotADuck`. Both have the same structure, i.e., they both have a method named `quack`. We then define a function `makeItQuack` that accepts any type of object that has a `quack` method. This function is a template function, which means it can work with any type of object. In the `main` function, we create objects of both classes and pass them to the `makeItQuack` function. The function calls the `quack` method on the passed object, regardless of its actual type. This is similar to structural typing, where the type of an object is determined by its structure, not by its name or declaration.