# Multiple Top-Level Classes in Same File
In the above code, we have two top-level classes, `MyClass1` and `MyClass2`, each with a public method that prints a message. In the `main` function, we create an instance of each class and call their respective methods.

It's important to note that in C++, unlike some other languages like Java, there's no requirement for the file name to match any of the class names. Also, there's no limit to the number of top-level classes you can define in a single file.

However, it's generally considered good practice to keep each class in its own file for the sake of organization, especially when working on larger projects. This makes it easier to find the class you're looking for and keeps the code more manageable.

Also, C++ doesn't have a built-in concept of packages or modules like some other languages (e.g., Python or Java). The closest equivalent would be namespaces, which can be used to group related code together and avoid name collisions. However, namespaces are a separate topic and not directly related to the concept of having multiple top-level classes in the same file.