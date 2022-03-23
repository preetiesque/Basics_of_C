#include <stdio.h>

int main()
{
    unsigned int a = 1000;
    int b = -1;
    
    if(a>b){
        printf("a is BIG\n");
    } else {
        printf("a is SMALL\n");
    }
    return 0;
    //type promotion gets converted and -1 is treated as unsigned and unsigned -1 is the biggest number
}
