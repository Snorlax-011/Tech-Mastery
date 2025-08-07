# Rule-1:

In any context where it is permissible to use a variable of some type, we can use a more complicated expression of that type.

# Explanation:

If we consider [temp_for_loop.c](./Code/temp_for_loop1.c) --> *Fahrenheit to Celsius*,

```c
for(int fahr=0; fahr<=300; fahr+=20)
    printf("%3d %6.2f\n", fahr, ((5.0/9.0)*(fahr)-32.0));
```
`printf()` expects type `float` for the second argument (`%6.2f`)

So 
1. We can create a variable (type `float`) and store the value `((5.0/9.0)*(fahr)-32.0)` in it and use that variable in the for loop.
                 (or)
2. We can provide `((5.0/9.0)*(fahr)-32.0)` directly as the argument, in which case, `C` will evaluate the expression (type `float`) and then passes it to `printf()`

The rule is that we use the second method. i.e., provide the expression as the argument to the function directly.
