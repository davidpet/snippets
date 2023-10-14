# when braces are required vs. optional
In C++, braces `{}` are used to group multiple statements into a single compound statement or block. They are required when the body of a control flow statement (like `if`, `for`, `while`, etc.) contains more than one statement.

However, if the body of the control flow statement contains only a single statement, the braces are optional. This can make the code more concise, but it can also lead to confusion and bugs if not used carefully. For example, if you later add a second statement but forget to add the braces, the second statement will not be part of the control flow statement.

In the code above, we demonstrate both cases: when the braces are optional (single statement after the control flow statement) and when they are required (multiple statements after the control flow statement). We show this for `if`, `for`, and `while` statements.