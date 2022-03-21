
#include <stdio.h>

int main()
{
    //EXTENSION
    short int y = -9;
    unsigned int iy = y;
    
    printf("%d\n",y); //the bit pattern is of 16 bit and will be treated as signed due to %d,hence the 1's(MSBs) can be ignored and the result will be -9
    
    printf("%u\n",y); // the bit pattern is of 16 bit but due to unsigned the 1's can't be ignored and hence the answer is a huge number
    printf("%d\n",iy);//extension to 32 bit , but due to signed the MSBs are ignored and answer is -9
    printf("%u\n",iy);//
    
    

    return 0;
}
