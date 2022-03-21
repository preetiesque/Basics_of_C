#include <stdio.h>

int main()
{
    unsigned int y = -9;
    printf("%d",y);
     
    //This will give -9 as input because we are treating the bit pattern of y as signed. Signed due to the format specifier %d.

    return 0;
}
