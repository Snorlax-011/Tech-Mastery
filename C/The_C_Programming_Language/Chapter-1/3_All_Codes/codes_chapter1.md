# 01_temp_conversion_1.c
```c
/*Temperature Conversion: Fahrenheit to Celsius*/
// For every 20 Fahrenheit
#include <stdio.h>

int main(void)
{
    printf("Fahrenheit to Celsius\n");
    float fahr, celsius; //cast as float for accuracy
    int upper, lower;

    lower = 0;
    upper = 300;
    fahr = lower;

    while (fahr <= upper)
        {
            celsius = (5.0/9.0)*(fahr - 32.0); //formula // added .0 (5.0, 9.0 and 32.0) for precision in celsius calculation. 
            printf("%3.2f%s = %6.2f%s\n", fahr, "fahr", celsius, "celsius"); //print as floating point('at least 3 wide and 2 decimal places')
            fahr += 20;                                                                               //('at least 6 wide and 2 decimal places')
        }
}
```

# 02_temp_conversion_2.c
```c
//Temperature Conversion: Celsius to Fahrenheit

#include <stdio.h>

int main(void)
{
    printf("Celsius to Fahrenheit\n");

    int lower, upper;
    float celsius, fahr;

    lower = 0;
    celsius = lower;
    upper = 300;

    while (celsius <= upper)
    {
        fahr = ((9.0/5.0)*(celsius)) + 32.0;           //formula
        printf("%3.2f%s = %6.2f%s\n", celsius, "celsius", fahr, "fahr");
        celsius += 20;
    }
}
```

# 03_temp_for_loop1.c
```c
//Fahrenheit to Celsius with for loop
#include <stdio.h>

int main(void)
{
    printf("Fahrenheit - Celsius:\n");

    for(int fahr=0; fahr<=300; fahr+=20)
    {
    printf("%3d %6.2f\n", fahr, ((5.0/9.0)*(fahr-32.0)));
    }
}
```

# 04_temp_for_loop1.c
```c
//Fahrenheit to Celsius in reverse order (from 300 degrees to 0)
#include <stdio.h>

int main(void)
{
    printf("Fahrenheit to Celsius:\n");
    for(int fahr=300; fahr>=0; fahr=fahr-20)
    {
    printf("%3d %6.2f\n", fahr, ((5.0/9.0)*(fahr-32.0)));
    }
}
```

# 05_char_i_o.c
```c
#include <stdio.h>
int main(void)
{
    int c;            // To know why int instead of char
    c = getchar();    // and why '\n' instead of "\n"
    putchar(c);       // go to 06_literal.md
    putchar('\n');    
}
```

# 06_in_put_out1.c
```c
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
```

# 07_in_put_out2.c
```c
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
```

# 08_eof.c
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