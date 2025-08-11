# I/O

```c
while ((c = getchar()) != EOF)
    {
        putout(c);
    }
```
> The question is "Since we did not discard the first char of the input, it should print the first char again and again right?"

> Answer:
The `getchar()` function "*consumes*" the characters from the input stream.
Once a character is read, it's gone from the stream forever. The stream automatically advances to the next position.

e.g. say, the input that we type is `Eureka` and then hit enter.
Now the input stream contains `E``u``r``e``k``a``\n`         //Pressing enter:
                                                             //1. adds `\n` at the end.
                                                             //2. Signals completion of the line.
(When the while loop goes through the `\n` we provided (by pressing `enter`), `putchar(c)` moves the cursor to the next line, which is an effect of `\n`. (`\n` won't be printed. It's a character that only shows effect.))

Coming back to the `Eureka\n`:
getchar(c) looks at the front of the input stream.
The first char `E` from the stream is stored in the variable `c`.
Then the input stream only contains `u``r``e``k``a``\n`
Now `u` becomes the front char.
The while loop condition ```c ((c = getchar()) != EOF)``` is tested again.
`c = getchar()` now becomes `u`.
...



This is exactly *How* Input and Output in C works (I guess).


## Operator Precedence and parantheses:

Considering the while loop: ```c while ((c = getchar()) != EOF)```
if we remove the inner `()` (the outer `()` shouldn't be removed coz in C, while loop condition must be enclosed in `()`),
the condition now becomes: ` while (c = getchar() != EOF)`.

There are 2 operators : `=` and `!=`
In `C`, the first preference is given to `!=` than `=`.

So ` while (c = getchar() != EOF)` implies `while (c = (getchar() != EOF))`.

Effect of this:
If we type `E` in the terminal, (ASCII = 69😎);
`69 != EOF` is `true` (EOF is usually equal to `-1` a/c to the internet).

# Return Values:

Usually, in terms of `True` or `False`, `1` implies `True` and `0` implies `False`.

In terms of success/failure, `return 0` means `success` by convention.

(And any +ve no. means `failure`. //coz, if everything's successful, it is either successful or not successful.
But there are thousands (and more) things that can go wrong in computer systems.
That's why we use every no. but `0` to represent failure.)


# Conclusion:

`69 != EOF` is `True`, hence returns `1`.
`c = 69 != EOF` --> `c = 1`.
...and the char `E` is lost forever...

> So...remember: `()` are important 😤💪💪 and if neglected, the whole code could be in an existential crisis.