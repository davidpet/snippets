# Namespaces for Code Organization and Avoiding Name Collisions
In the above code, we have demonstrated the use of namespaces in C++. Namespaces are used to avoid name collisions in larger projects. They provide a way to group named entities that otherwise would have global scope into narrower scopes, giving them namespace scope. This allows organizing the elements of programs into different logical scopes referred to by names.

We have declared two namespaces 'namespace1' and 'namespace2' each containing a variable 'var'. We then access these variables using the namespace name as a prefix.

We have also demonstrated nested namespaces with 'parent' namespace containing 'child1' and 'child2' namespaces. We access the variables in these namespaces using the parent and child namespace names as prefixes.

Finally, we have demonstrated the 'using' directive which brings all the names from a namespace into the current scope. After the 'using' directive, we can use the names from the namespace without prefixing them with the namespace name. However, this should be used carefully as it can lead to name collisions.