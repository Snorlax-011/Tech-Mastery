Format string: A string that dictates the structure of the output using format specifiers.

Format specifiers: Starts with % and acts as a placeholder for the things we provide in the arguments

Width: The number right after the %
     : Specifies the minimum number of characters for the output
     : Useful for inserting space to look nice.

Precision: The number that comes after the decimal point
         : Controls the number of digits to show after the decimal point.

Examples:
        
%d: for printing an integer
%f: for printing a float (with any no. of decimal spaces)
%4d or %4f: for printing no. with atleast 4 characters wide.
          : print("%4d", 69) --> outputs '  69' (adds 2 spaces before 69 since the minimum width is 4 and 69 is just 2 characters).
%.8f: for printing floats with 8 digits after the decimal point.

printf("%6.9f", 3.14159265358979323846) --> outputs 3.141592653 (9 digits after the decimal point). Here minimum width of 6 is met since 3.141592563 contains 11 characters.

`printf` uses `%f` for both `float` and `double`.

Escape sequences:

\t: prints a tab (indents text to the next tab stop).
\n: moves cursor to the next line