// Line Counting:
// An input text stream appears as a sequence of lines, each terminated by a new line.

#include <stdio.h>

int main(void)
{
    int c, line_count;
    line_count = 0;             //if we don't initialize, line_count = garbage value.
                                // Always initialize variables before using.
    while((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++line_count;
        }
    }

    printf("%d\n", line_count);
}