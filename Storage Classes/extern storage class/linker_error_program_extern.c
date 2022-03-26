#include <stdio.h>

int main()
{
    extern int num;
    num = 20;
    printf("%d",num);
    //the program will compile successfully because of extern but there will be linker error because
    //we have told the compiler that num is defined somewhere else in the program but it is not defined anywhere.
    //remember that num = 20 is not a definition
}