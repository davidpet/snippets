# Auto param type

This is covered a little bit in the "Generic Lambdas" snippet of "Templates", but additional details are shown here.

1. You can use `auto` for any params or return types of a lambda to make it a generic lambda.
1. You can call the generic lambda with any types, just like a template function.
1. To assign the lambda to a function pointer or `std::function`, you have to use concerete types in those variables, which results in a __concrete instantiation__ of the template.
