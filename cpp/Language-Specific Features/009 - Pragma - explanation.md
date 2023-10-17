# Pragma

The `#pragma` directive is part of the standard, but it is up to each compiler what arguments can come after the directive.

A very common one is `#pragma once` to guard a header from being included more than once. Since it's not technically standard, the official recommendation is still to use the `#ifndef` construct.

Another common one is `#pragma pack` which lets you adjust the memory layout of classes/structs.

The standard also states that __unknown pragmas__ should be __ignored__ rather than cause an error - allowing you to use pragmas for one compiler but still compile with others.
