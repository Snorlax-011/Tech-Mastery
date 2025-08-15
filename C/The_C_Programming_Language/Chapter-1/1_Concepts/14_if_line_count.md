# The `if` Statement:
### Syntax:
```c
if (...condition...)
{
    .
    .
    statements
    .
    .
}
```
The `if` statement tests the condition in `()` and if `true` (meaning the expression evaluates to any non-zero value), the statements will be executed.

> The phrase "evaluates to any non-zero value" is the technical way of saying "the condition is true."

`C uses a simple integer rule to represent truth:`

`The integer 0 means false.`

`Any non-zero integer (positive or negative) means true.`

This is useful:
```c
if (69)
{
    statements;
}
```
Since `69` is non-zero `int`, the condition is considered `true` and the statements will be executed.


# Character Constant:
In `C`, a character enclosed in `single quotes`, like `'A'`, is not treated as a letter but as an "integer".
> Characters written in `''` is called character constant.

It's always good practice to use "character constants" instead of hardcoding magic numbers. This increases readability and portability.

> A key property of character sets like ASCII is that the letters of the alphabet are represented by consecutive numbers. This allows for arithmetic manipulation.

For e.g.
In ASCII, the numeric codes for lowercase letters are exactly 32 greater than their uppercase counterparts.

`'a' = 97` and `'A' = 65`
To convert `a` to `A`, we need to subtract `'a' - 'A'` from `a`

```c
printf("%c\n", ('a' - ('a' - 'A')));
```
We could've wrote `97-32` directly.
But writing `'a'` is obvious to programmers and also makes the program portable among systems other than ASCII. i.e. to convert `a` to `A` in EBCDIC system, `97 - 32` doesn't work...but `'a' - ('a' - 'A')` works.