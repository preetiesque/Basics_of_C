#include <stdio.h>

int main()
{
    
    unsigned int y = -9;
    printf("%u",y);
    //the result will be huge because the bit pattern of -9 is treated as huge number
    //the bit pattern consists of many 1's
    return 0;
}
