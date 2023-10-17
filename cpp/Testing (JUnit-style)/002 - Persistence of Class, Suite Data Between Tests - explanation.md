# Persistence of Class/Suite Data Between Tests

Google Test does not directly support persistence of class/suite data between tests as JUnit does with @BeforeClass and @AfterClass. However, we can achieve similar functionality by using static variables or singletons. 

Here is a simple example of how you can persist data between tests in Google Test using static variables:

In this example, we have a test suite `TestSuite` with a static member `data`. We initialize `data` in `SetUpTestSuite` and clean it up in `TearDownTestSuite`. These methods are called once for the entire test suite, not for each test. Therefore, `data` persists between tests.

We then have two tests, `Test1` and `Test2`, that use `data`. Since `data` is a static member of `TestSuite`, it is the same for both tests.

Please note that this is a simple example and in a real-world scenario, you would need to handle synchronization issues if your tests are running in parallel.
