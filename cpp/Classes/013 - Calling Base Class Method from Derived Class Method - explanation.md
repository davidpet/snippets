# Calling Base Class Method from Derived Class Method

To call the base version of a method from the derived version, you basically pretend it's static on the base class, but you pass parameters as if it's not static (no `this` pointer needed or anything like that).

You could do this from outside with `m.MyBase::method()` as well though that seems to violate OOP principles.
