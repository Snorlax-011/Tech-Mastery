# End of File:

> How does C know when the input or a text has ended?
Like...input can be "    " or ' '...(C accepts space characters, tabs, new lines...) and while writing the code we go to new lines (by clicking enter or \n).
Then how does C exactly know whether input/code has ended or the user has printed more spaces?

>> Here comes the value "End of File" with dramatic background effects😎🔥.

`getchar` (and the functions that read the provided data char by char) returns a distinguishable value when the input ends.

This value is called `End of File`.

In programming, we use return values to signal the status.
End of file is one such value.


Now as to why we shouldn't initialize `getchar`() as char in [Character I/O code](../Code/05_char_i_o.c) is because `getchar` might return any value and we must be prepared to declare the function with a type big enough to hold such value. That's why we used int.

A char variable is only guaranteed to be able to hold all possible characters.
An int variable is larger and can hold all possible characters plus the special EOF value

`EOF` is an integer defined in `<stdio.h>`.

The expression `c != EOF` is the standard way a C program checks if the end of the input has been reached.