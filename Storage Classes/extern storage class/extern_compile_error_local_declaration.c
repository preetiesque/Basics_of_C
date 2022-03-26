#include <stdio.h>

int main()
{
    extern int i = 10;
    printf("%d",i);
    return i;
}
//the program will not compile,there will be compile error
//extern keyword/storage class in NOT used for local variable hence there will be compilation error
