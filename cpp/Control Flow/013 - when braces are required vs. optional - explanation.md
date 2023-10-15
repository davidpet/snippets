# when braces are required vs. optional

In C++, braces `{}` are used to group multiple statements into a single compound statement or block. They are required when the body of a control flow statement (like `if`, `for`, `while`, etc.) contains more than one statement.

However, if the body of the control flow statement contains only a single statement, the braces are optional. This can make the code more concise, but it can also lead to confusion and bugs if not used carefully. For example, if you later add a second statement but forget to add the braces, the second statement will not be part of the control flow statement.
