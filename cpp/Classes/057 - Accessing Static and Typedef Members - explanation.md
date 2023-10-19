# Accessing Static and Typedef Members

__Static__ class members can be accessed from instances as if they were instance members, but you're really accessing the static member. It is not recommended to do it this way because it may lead to confusion. It does not spawn a new copy on the instance like in Python.

__Typedefs__ in a class are only accessible __via the class__ and not an instance, using scope resolution. A potential workaround if you have an instance but not the type (or the type is too long to repeat) is to use `decltype(var)::member` which will do the right thing at compile-time. Another alternatie is to use `auto`.
