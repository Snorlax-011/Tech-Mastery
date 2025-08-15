```c
#include <stdio.h>
int main(void)
{
    while (c = getchar() != EOF)
    {
        putout(c);
    }
}
```
>Since `!=` has higher precedence, it'll be executed first.
`getchar() != c` is true for the inputs we provide, hence returns 1 and stores in the variable c.

Let's cross check:
```c
#include <stdio.h>

int main(void)
{
    int c;
    while (c = getchar() != EOF)
    {
        printf("%d\n", c);
    }
}
```
This code prints the `int` stored in `c`, which is `1`.

Now `putout(c)` (the 1st code) should print `1` (atleast, that's what I thought)

>Here comes *Control Characters*:

The `putchar()` function prints the character represented by it's input (here `1`) in the ASCII character set.
In this case, `putchar()` looks at the corresponding ASCII character represented by the number `1` and prints it.
>The ASCII character of `1` is a **Control Character** called Start of Heading `SOH`.
>`SOH` has no visible representation. Hence the terminal won't print it on the screen.

Control Characters are used to signal status and some other kind of stuff in the background.