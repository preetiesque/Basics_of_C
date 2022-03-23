#include <stdio.h>

int main()
{
    int x = 8;
    printf("%d\n",~x);
    //~ - complement operator
    //bit pattern of 8 :       0000 0000 0000 1000
    //~ of bit pattern of 8 :  1111 1111 1111 0111
    //The MSBs are ignored for signed integer(remember that int is treated as signed by default)
    // hence only 1 0111 is considered in the bit pattern whose decimal value is -9 in signed system
}
