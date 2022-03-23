
#include <stdio.h>

int main()
{
    printf("THIS IS LEFT SHIFT\n");
    int x,y = 10;
    x = y << 1;
    printf("%d\n",x);
    // bit pattern of 10 :                             00001010
    //left shift : (moving two positions to the left): 00010100
    //when we convert it into decimal we get 20,implying that left shifting by 1 multiplies the number by 2
    
    printf("THIS IS RIGHT SHIFT\n");
    int a,b = 10;
    a = b >> 1;
    printf("%d\n",a);
    //bit pattern of 10:                                00001010
    //right shift : (moving two positions to the right) 00000101
    //when we convert it into decimal we get 5,implying that right shifting by 1 divides the number by 2
    
}
