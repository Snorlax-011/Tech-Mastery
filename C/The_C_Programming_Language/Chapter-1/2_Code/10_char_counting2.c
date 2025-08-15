// Char counting with for loop

#include <stdio.h>
int main(void)
{
    double char_count;

    for (char_count = 0; getchar() != EOF; ++char_count)
    {                               // There's nothing to do in the body of the for loop
        ;                           // ";" is called null statement
    }                               // In C, for loop must have a body and hence the ";"
    printf("%.0f\n", char_count);
}

                                    // provide input and hit enter.
                                    // If needed, provide more input and hit enter.
                                    //Then hit Ctrl + D to signal the EOF.
                                    // The output will be number of chars present in the input stream (including no. of \n).