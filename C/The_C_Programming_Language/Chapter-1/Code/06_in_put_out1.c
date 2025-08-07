//Program that copies its input to its output

#include <stdio.h>
int main(void)
{
    int c;
    c = getchar();
    while c != EOF
        {
            putchar(c);       //outputs the first char of the provided input.
            c = getchar();    //assigns c to the next char of the provided input.
        }                     //loop terminates when  c = EOF.
}