# Subclass Changing Access Level

One of the peculiarities of C++ is that you can arbitrarily change the acess level of a __virtual member__ in a subclass.  You are not restricted to only increasing access like in Java.

This only applies to virtual methods because the rest are subject to name hiding behavior.

The access level of a member is determined by the interface you use for it.

In addition, you can use `using` to explicitly import a member from a base into a certain access level in the subclass.
