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