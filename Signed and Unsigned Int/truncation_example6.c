#include <stdio.h>

int main()
{
    char a = -30,b = 40;
    char d = a*b;
    printf("%d\n",d);
    printf("%d\n",a*b);
    //truncation occurs while storing the reuslt of a*b in char d which is of only 8 bit.
    //but due to the format specifier %d,it gets promoted to int and the reduced bit pattern output is given
}
