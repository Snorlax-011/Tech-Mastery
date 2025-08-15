In char_counting.c;
```c
#include <stdio.h>
int main(void)
{
    long char_count;

    char_count = 0;

    while (getchar() != EOF)
    {
        ++char_count;
    }
    printf("%ld\n", char_count);
}
```
we used type `long`.
`long` is like type `int`, but with bigger storage.
`long` integers are at least `32 bits`.
> `C` guarantees a "minimum size" than forcing a fixed size for data types. This makes `C` more portable across devices (it can run on variety of computers).

Here, at least `32 bits` means:
On any machine that has a `C` compiler, a long is guaranteed to be able to hold numbers from `-2 billion` to `+2 billion`. (the 32 bit range).
> It can be larger, but never smaller than `32 bits`.

# Integer Overflow:
`Int`s and `long`s are fixed width.
A `16-bit` int can store only `2^16` (`65,536`) different patterns.
>In Two's complement system, the values assigned are from `-32,768` to `+32767`.
> This number line is `circular`. i.e. the value following the max. +ve (`32767`) value is the minimum -ve (`-32768`) value.

# Binary Addition:

All number systems are *positional*.
Each position has a `weight` and a limited `capacity` of the digits it can hold.
>Consider `9 + 1`:
>The `ones` value can hold until `9`.
> `9 + 1 = 10`.
>**The Overflow**: The value of `9 + 1` is too large to fit in `ones` place. We have exceeded it's `capacity`.

> Using the available place values, we must represent the value `10`.

> `10` is composed of `one` group of `ten` and `zero` groups of `one`.
> `10 = (1 * 10) + (0 * 1)`

> The `1` represents `"one" full group of the next higher place value`.
> WE carried `1` since the sum created exactly `one` group of `10`.

Similarly, in binary:

  1
+ 1
-----
 10
-----
Using the binary place values, The number `2` is composed of "one group of two" and "zero groups of one" `(1* (2^1)) + (0*(2^0))`.

>The `1` represents one full group of the next higher place value (the "twos" column). "This is the value that is carried over".

The `carry` operation is specifically designed to handle the `"overflow"` from one column to the next, and that overflow is always measured in `full groups of the next place value`.

Therefore,

  0111 1111 1111 1111 `(32767)`
+                   1 (1)
---------------------
  1000 0000 0000 0000  = `-32768`
---------------------

>`"Wrap-around"` is what happens when you count past the maximum or minimum limit of a fixed-size number.
>Instead of stopping or causing an error, the value `wraps around` from the highest possible value to the lowest (or vice versa).


>(If you're still reading...)
We'll get `wrong` value if we exceed the addition past the maximum value.

That's why we used `long` instead of `int` in the code.