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