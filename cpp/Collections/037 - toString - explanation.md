# toString

There is no equivalent of Java/C# toString() in C++.  The usual way to support conversion to a string is to override `operator<<` on an `ostream&`, which would then allow you to use it with `std:cout` and/or `std::stringstream`.

The __built-in collections do not__ implement this.
