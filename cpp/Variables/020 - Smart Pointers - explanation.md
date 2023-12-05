# Smart Pointers

In this code, we declare and initialize a `unique_ptr` pointer `smart` and assign a value to it. The memory allocated for `smart` will be automatically deallocated when `smart` goes out of scope. 

`shared_ptr`, on the other hand, is a refcounted smart pointer that allows for multiple pointers to an object that will deallocate when all are done.

Both `unique_ptr` and `shared_ptr` assume they will have full control of the object - if you intermix with naked pointers, or multiple smart pointers that are not connected, it wil break down.

One way to use smart pointers would be to have a class member that is a `unique_ptr` so that it implicitly owns the storage, and then it's ok to pass naked pointers around as long as nobody else tries to delete them.
