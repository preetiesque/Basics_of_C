#include <stdio.h>

int main()
{
    char a = 30 , b = 40;
    char d = a * b;
    printf("%d\n",d); //truncation occurs here because we have stored the result into char which can take only upto 8 bits
    printf("%d\n",a*b);
}

