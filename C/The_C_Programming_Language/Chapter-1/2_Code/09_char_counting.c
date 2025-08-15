//Counting Characters:
#include <stdio.h>
int main(void)
{
    long char_count;

    char_count = 0;

    while (getchar() != EOF)
    {
        ++char_count;           // everytime a new char comes from the input stream,
    }                           // char_count will be incremented.
    printf("%ld\n", char_count);// /n (when clicked on enter) is a character too.
}