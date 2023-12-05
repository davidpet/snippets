# References

In C++, references, declared with `&`, are different from references in languages like Java. They are basically secret pointers to the data they reference and __cannot be rebound__.  If you try to rebdind it, you're actually doing an assignment to the original variable that it references.  You have to bind them right away because otherwise they have no meaning.

The `&` binds to the right to the variable itself, not the type.  But `const` binds to the type.  So a __constant reference__ is a reference to an object that cannot be changed via the reference.  The object itself may or may not be constant.  The compiler will not let you assign a non-const reference to a const object because then you'd be able to change it.

There is no such thing as having multiple `&` in a chain like with pointers, except for the special case of `&&` which is an __rvalue reference__.  This can be used on an rvalue (temporary object) to let the temporary object keep living within the current scope.  It is not usually used the way it's shown here but rather as a function parameter overload to allow you to take posession of resources inside a temporary object without making a copy (__move semantics__).

NOTE: references and pointers do not keep an object alive like in a garbage collected system.  They can become invalid without knowing it if used dangerously.

NOTE: the `sizeof()` a reference is the size of the referenced type, not the secret pointer storage.
