# Memory Leaks

Unlike in basically every other modern language, C++ does not have garbage collection or refcounting or anything like that (other than using the smart pointers for those purposes).  Automatic variables clean themselves up, but __heap variables can leak__.  You have to manage the memory either by using `delete` or a smart pointer.
