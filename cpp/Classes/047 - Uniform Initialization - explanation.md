# Uniform Initialization

Uniform initialization refers to the use of `{}` as a general purpose initialization construct, introduced in C++ 11.

In general, when you use `{}` (instead of `()` or nothing) to initialize an object, this is the order of precedencde of how that will be interpretted:

1. __List of elements__ - if the object has a constructor that takes `std::initializer_list`, that will be used by `{}` and will contain an iterable container of the items passed in.  This is a lightweight wrapper around a temporary array.  It is used by standard library containers like `vector` now as well.  This applies to arrays as well.

1. __Constructor call__ - if no `std::initializer_list` constructor is present, but at least one user-defined constructor is present, then `{}` will invoke any constructor that matches the args, just as if you used `()` as in a normal constructor call.  This includes using `{}` with no args for the default constructor.

1. __Aggregation__ - if no user-defined constructors are present, and all fields are public (as in a struct by default), then the object is considered a POD, and `{}` lets you specify the fields to set in order.  There are some other nuances about when this will and won't work.  It's mostly meant for structs.

Also, keep in mind that assigning to a new object with `=` is exactly the same as calling the initializer inline, and thus the syntax is the same.  For instance, these are exactly the same (none are a copy):

`MyClass m{10, 100};`

`MyClass m = {10, 100};`

`MyClass m = MyClass{10, 100};`

When it comes to __function calls__ and other operators, like assignment, values passed into parameters or __returned__ from the function can be __naked initializers__ with no type specified (inferred from the context).

For dynamic allocation with `new`, the same syntax applies (on the right side), but there is 1 additional option of invoking the default constructor with no `()` or `{}`.

Uniform initialization syntax can perform __conversions__ as well. For instance, both `int a(o);` and `int a{o};` perform __explicit conversion__ of an object o to an `int`.  Both of those versions will trigger a warning if you try to downcast a number though (need to use `static_cast` for that).

Construction of __primitives__ is a little special.  They don't have true default constructors the way classes do - some types they default to junk (`int x;`) and sometimes they default to 0 (`int x{};` or `int x();`).  You can specify 0 or any other value explicitly like `int x{100};` or `int x(100);`.

__Arrays__ always supported `int arr[] = {1, 2, 3, 4, 5};` - that is the basis for the new uniform syntax. But you can also do `int arr[]{1, 2, 3, 4, 5}`, which may or may not be new.
