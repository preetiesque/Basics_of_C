#include <stdio.h>

int main()
{
    char string = "BADGERS";
    char * ptr = string;
    *ptr = *ptr + 2;
    ptr = ptr + 2;
    printf("%c",*ptr);
    ptr--;
    printf("%c",*ptr);
    ptr = string;
    printf("%c",*ptr);
    return 0 ;
}
