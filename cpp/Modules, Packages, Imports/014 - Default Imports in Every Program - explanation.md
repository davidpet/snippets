# Default Imports in Every Program
There are two types of `#include` directives: `#include <filename>` and `#include "filename"`. The former is used for system libraries, while the latter is used for user-defined files.

Here is an example of including a user-defined file:

```cpp
#include "myFile.h" // Include the user-defined file myFile.h

int main() {
    myFunction(); // Call a function defined in myFile.h
    return 0;
}
```

In this example, `#include "myFile.h"` includes the user-defined file myFile.h. We then call a function that is defined in myFile.h.

##### 

Note that C++ does not support the concept of packages or modules like Python or Java. However, with C++20, a new feature called modules is introduced, which aims to provide a high-level way of managing large codebases and dependencies, but it's not yet widely adopted or supported by all compilers.