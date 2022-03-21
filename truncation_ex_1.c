#include <stdio.h>

int main()
{
    //TRUNCATION
    int x = -9;
    short int y = x;
    
    printf("%d\n",x); //signed number hence only -9
    printf("%u\n",y); //unsigned  number hence huge number
    //TRUNCATION from 32 bit int to 16 bit short int
}
