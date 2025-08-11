//Program that copies input to output, but, in a compact way.

#include <stdio.h>
int main(void)
{
    int c;
    while ((c = getchar()) != EOF)   //Parantheses are important (more on this on I/O final.md) 
        {
            putchar(c);    
        }                   
}                          //No need to mention c = getchar() below putchar()
                           //Then how does the while loop go to the next available character
                           //if we don't mention to disregard the char that's been print by
                           // altering the variable c to c - (the first char), i.e. c = getchar() again?

                           
                           // In other words, in the while loop,
                           // the c = getchar() function is not called again inside the loop's body.
                           //So, how does the loop get the next character from the input for each new iteration,
                           //instead of processing the same character over and over?


                           //The answer is in 08_input_output_final.md