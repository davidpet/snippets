# Diamond Inheritence

When you inherit the same base in multiple subclasses and then inherit from those, you get the __diamond problem__ shown here.

Instead of choosing one over the other, like in Python, C++ includes both as separate entities.  But because it's ambiguous, you must specify which one you want when you access those members.

You might expect to be able to resolve the ambiguity with a `using` statement, but it __doesn't work__.

Although in most cases, `virtual` members won't be as affected by this, it is worth noting that diamond inheritence does result in a __vtable__ that has multiple paths through it due to this structure, and that could potentially have effects.

Note: some of this can be solved by __virtual inheritence__ which is covered next.
