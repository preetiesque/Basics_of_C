#include <stdio.h>

int main()
{
    char a = 30,b = 40;
    signed char d = a * b;
    printf("%d\n",d);
    //truncation occurs and the MSB is 1 it is treated as negative number and -80 is the result
}
