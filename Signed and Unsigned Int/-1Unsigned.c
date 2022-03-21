#include <stdio.h>

int main()
{
    int x = -1;
    unsigned int u = x; //no extension is required here
    
    printf("%d\n",x); //the bit pattern of -1 is huge,if it is treated as signed integer then the result will be -1
    printf("%u\n",x); //but if it is treated as unsigned number then it will be huge number
    //always look for the RHS side whether it is signed or unsigned.Always look for the source
    printf("%d\n",u);
    printf("%u\n",u);

    return 0;
}
