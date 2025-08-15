#include <stdio.h>
int main(void)
{
    int c;
    c = getchar();
    while(c != EOF)
    {
        c = getchar();            //reads chars one by one until input stream ends.
    }
    
    printf("%d\n", c);            //until EOF is signaled (input stream ends) with Ctrl+D in the terminal,
}                                 //it keeps on waiting for more input.