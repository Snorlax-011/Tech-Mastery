Robustness is the ability of a program to handle errors, unexpected input, and stressful operating conditions without crashing or producing incorrect results.

### Principle:
A well-designed program should behave intelligently and predictably, especially when given unusual or "edge case" inputs.

> Edge Cases: In programming, boundary conditions are the "edge cases"—inputs that are at the extreme ends of a range, such as the maximum possible value, the minimum, or, in this case (char counting), zero items.

> A poorly written program might work fine with normal input but crash or give a wrong answer when faced with a boundary condition. A "robust" program handles them gracefully.

## Test at the Top:
The `while` and `for` loops test their condition before executing the loop body even once. This is the `"test-at-the-top"` design.

In char_counting.c codes, we wrote:
```c
while (getchar() != EOF)
{
    ++char_count;
}
```
and

```c
for (char_count = 0; getchar() != EOF; ++char_count)
{
    ;
}
```
> If we provide file with "zero length input" to the `getchar()` function, 
>>(we can "pipe" or "redirect" the contents of a file into a program, making the program behave as if we had typed the file's contents on the keyboard). The input stream will be connected to the file.
> The operating system sees that the file is empty and there are no characters to provide. It immediately sends the `EOF` signal.

When the loop begins, `getchar() != EOF` will be checked.
`getchar()` is called. Since the input stream is empty, it immediately returns the `EOF` signal.
Since `EOF != EOF` is `false`, the loop body will never be executed.
Finally, `printf()` will correctly print `char_count = 0`.

> Program should act intelligently when given zero-length input.

In short, what's special is that the fundamental design of `while` and `for` gives us this safety for free, helping us write robust programs that handle edge cases correctly and automatically.