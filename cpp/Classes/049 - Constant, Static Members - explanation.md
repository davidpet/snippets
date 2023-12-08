# Constant and/or Static Members

__Constant fields__ are part of the __class instance__ and must be set either inline or in the initialization list - they cannot be left to become junk if they are numbers. They __do not__ have to be set by __compile-time constant__.

__Static constant fields__ are different because they are not part of an instance. So the storage for them is global, meaning they must be defined outside the class as a __constant variable__ if they are not set __inline__ (cannot be set in initializer list). And unlike with constant fields, they have to be set by a __compile-time constant__.

__Static fields__ that aren't const are special again in that they cannot be set inline for some reason.

It's worth noting here that `static` has different meanings in different scenarios, technically:
1. __local variables__ - once initialized, keep existing at that spot forever across multiple calls
1. __member variables__ - exist in one place (defined outside the class)
1. __member functions__ - callable without an instance of the class but defined in the class
1. __internal linkage__ - when used on a global variable or function
