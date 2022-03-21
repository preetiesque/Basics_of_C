#include <stdio.h>

int main()
{
    unsigned char f = -65;
    printf("%d\n",f);
    printf("%u\n",f);
    //firstly the bit pattern of -65 is decided,after that it is checked the type of source.
    //as the source is unsigned 0's are appended while int promotion and according to that the numbers are printed
}
