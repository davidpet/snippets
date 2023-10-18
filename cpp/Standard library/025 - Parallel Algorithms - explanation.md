## C++17 Parallel Algorithms

C++17 introduced parallel versions of many standard algorithms. These algorithms allow developers to easily take advantage of multi-core processors without dealing with the nitty-gritty details of threading. The parallelism is achieved using execution policies.

### Execution Policies

The parallel algorithms take an additional argument called an execution policy that dictates the kind of parallelism to be employed:

- `std::execution::seq`: Sequential execution (no parallelism).
- `std::execution::par`: Parallel execution.
- `std::execution::par_unseq`: Parallel and vectorized execution.

### Example: Parallel std::for_each

Let's take the `std::for_each` algorithm as an example. In a serial context, this algorithm applies a given function to each element in a range. With the parallel version, it does so concurrently across multiple threads.

In the code, the `std::for_each` algorithm doubles each element in the vector. Thanks to the `std::execution::par` execution policy, this operation happens in parallel, distributing the workload across multiple threads.

### Caveats

- Not all standard algorithms have parallel versions.
- The actual degree and method of parallelism might vary based on the implementation details of the standard library in use and the hardware on which the code runs.
- Overhead: For small data sets or simple operations, the overhead of spawning multiple threads might negate the benefits of parallelism. It's essential to benchmark and profile to determine the actual benefits.

---

Remember, parallel algorithms can simplify multi-threaded programming to an extent, but they are not a panacea. Proper understanding of data dependencies, potential race conditions, and other concurrency issues is still crucial.

NOTE: this snippet doesn't run in clang and has errors in VSCode.  Apparently this is an incompletely implemented feature.
