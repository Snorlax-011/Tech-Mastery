# **Literals**:

# Source Code:
The code(text) that we write in a programming language.
It can be compiled(or assembled) into a program that we can run.

# Literal:
Literal is a representation of a value that is written directly into source codes.
..i.e., they are the things that don't change while executing the code.

e.g.:
# Integer literals :
The Whole Numbers (0, 1, 2...).
-ve numbers are not literals. A/c to C, they're expressions...The minus sign is treated as an operator that minus-es the value of the int literal that follows it.
# Float literals:
The ones with .
like....  3.1415926535
# String literals:
Zero or more characters encloses in ""
# Char literals:
Single characters that are enclosed with ''
e.g. `'8'`, `'A'`, `'\n'`,....
Internally, char literals are stored as their integer ASCII value (ASCII is just a system for representing chars using unique numbers).
like..A=65, B=66,...a=97 (yes. capital and small letters have different values too.)

> This is the reason why the variable storing `getchar` is initialized as an `int` instead of `char` in the [Character I/O code](./Code/05_char_i_o.c).

The answer to why to not initialize `getchar()` as a `char` is in the next concept...🔥