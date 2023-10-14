# RAII (Resource Acquisition Is Initialization)
The RAII (Resource Acquisition Is Initialization) idiom is a common idiom used in C++ to manage the lifetime of resources such as file handles, network sockets, and memory allocations. The idea is to tie the lifetime of these resources to the lifetime of an object: when the object is created (initialized), the resource is acquired, and when the object is destroyed, the resource is released.

In the above code, we have a class `MyResource` that represents a resource. The resource is acquired in the constructor of `MyResource` and released in the destructor. This way, we ensure that the resource is always properly released, even if an exception is thrown. The resource is used in the `use` function.

In the `main` function, we create an instance of `MyResource` in a new scope. When the scope ends, the `MyResource` object is destroyed, and the resource is released. This demonstrates the RAII idiom.

This is a simple example, and in real-world code, you would likely have more complex resources and more operations on them. However, the basic principle remains the same: acquire resources in a constructor, release them in a destructor, and tie the lifetime of the resource to the lifetime of an object.