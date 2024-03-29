## **C++ Standard Library Tour**

The C++ Standard Library is vast, encompassing utilities for I/O, strings, containers, algorithms, concurrency, and more. Here's a brief tour highlighting the main components.

### **1. Containers**
- **Headers**: `<vector>`, `<list>`, `<deque>`, `<array>`, `<forward_list>`, `<set>`, `<map>`, `<unordered_set>`, `<unordered_map>`, `<stack>`, `<queue>`
- `std::vector`: Dynamic array.
- `std::list`: Doubly-linked list.
- `std::deque`: Double-ended queue.
- `std::array`: Static array.
- `std::forward_list`: Singly-linked list.
- ... (similarly for other containers)

### **2. Algorithms**
- **Header**: `<algorithm>`
- `std::sort()`: Sort elements.
- `std::binary_search()`: Search in a sorted range.
- `std::for_each()`: Apply function to range.
- ... and many more.

### **3. Iterators**
- No specific header for iterators; they're usually included with containers.

### **4. Strings**
- **Headers**: `<string>`, `<wstring>`
- `std::string`: Dynamic string.
- `std::wstring`: Wide character string.
- Also: `std::u16string`, `std::u32string` for Unicode characters.

### **5. Streams**
- **Headers**: `<iostream>`, `<fstream>`, `<sstream>`
- `std::cin`, `std::cout`: Standard input and output.
- `std::ifstream`, `std::ofstream`: File input and output.
- `std::stringstream`: String stream.

### **6. Concurrency**
- **Headers**: `<thread>`, `<mutex>`, `<condition_variable>`, `<future>`
- `std::thread`: Represent a single thread of execution.
- `std::mutex`: Mutual exclusion.
- `std::condition_variable`: Condition variable.
- ... (similarly for other concurrency utilities)

### **7. Numeric**
- **Headers**: `<complex>`, `<random>`
- `std::complex`: Complex numbers.
- `std::random_device`, `std::mt19937`: Random number generation.

### **8. Memory**
- **Headers**: `<memory>`
- `std::unique_ptr`: Unique pointer.
- `std::shared_ptr`: Shared ownership pointer.
- `std::weak_ptr`: Non-owning pointer.
- `std::allocator`: Default allocator.

### **9. C Library**
- **Headers**: `<cstdio>`, `<cstdlib>`, etc.
- Most of the C Standard Library functions and types, wrapped in the `std` namespace.
- Some of them become available not wrapped in `std`, but still alias it in `std`.
- often the `std` ones are slightly more typesafe, and thus recommended.

### **10. Error Handling**
- **Headers**: `<exception>`
- `std::exception`: Base exception class.
- `std::runtime_error`, `std::logic_error`: Derived exceptions.

### **11. Miscellaneous**
- **Headers**: `<bitset>`, `<tuple>`, etc.
- `std::bitset`: For bit manipulation.
- `std::tuple`: Fixed-size collection of heterogeneous values.
