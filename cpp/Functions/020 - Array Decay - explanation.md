# Array Decay

1. When you pass an array to a function, you're really passing a __pointer__, not a copy.
    - that means if you change it, you change the original
1. Because of that, the presence of the count in the `[]` is totally optional and does not change compilation.
    - eg. if you get the count wrong, the compiler won't stop you
    - the array has __decayed__ because the 1st dimension is essentially lost.
1. If a __multidimensional array__, only the 1st dimension is lost, and the rest remain.
    - the reason for this is because multidimensional arrays are __contiguous blocks__ using math to calculate the indices.
    - int[][][] is __not the same__ as int***
    - so the function needs the dimensions after the first one to be able to calculate any elements correctly in the array
1. If you take a 3D array and pass a 2D part to a function that takes a 2D array, it decays 1 more layer within that function.
1. For some reason you cannot assign a multidimensional array to another.
