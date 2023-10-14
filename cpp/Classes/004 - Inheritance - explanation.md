# Inheritance
In the above code, we have three classes: `Animal`, `Dog`, and `Puppy`. `Animal` is the base class, `Dog` is derived from `Animal`, and `Puppy` is derived from `Dog`. This demonstrates multiple levels of inheritance.

The `Dog` class inherits the `eat` function and `age` variable from the `Animal` class, and adds its own function `bark`. The `Puppy` class, being derived from `Dog`, inherits all the members of `Dog` (including those inherited from `Animal`), and adds its own function `weep`.

In the `main` function, we create instances of `Dog` and `Puppy` and call their functions. The `Dog` instance can call `eat` and `bark`, while the `Puppy` instance can call `eat`, `bark`, and `weep`. This demonstrates that a derived class inherits the members of its base class, and can also add its own members.

Note that the `Dog` class is declared as `class Dog : public Animal`. The `public` keyword here specifies the access specifier. If it were `private` or `protected`, the `Dog` class would still inherit from `Animal`, but the inherited members would have different access levels. In this case, we use `public` to indicate that the inherited members keep their original access levels.