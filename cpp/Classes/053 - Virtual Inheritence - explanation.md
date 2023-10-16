# Virtual Inheritence

This is a way to resolve the __diamond problem__ by collapsing all redundant base classes to 1 so that you can get those members directly without specifying the path.

However, a drawback of this is that you have to __respecify the redundant base__ on the subclass, which breaks encapsulation and is ugly.

Note that the virtual inheritence is specified on the direct subclass of the redundant base, not on the most derived class.  But subclasses of those classes are forced to re-call that base's constructor.

Note: `virtual` applies to an individual base class just like the access modifiers.
