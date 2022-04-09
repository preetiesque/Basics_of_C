#include <stdio.h>

int main()
{
    short i = 20;
    char c = 97;
    printf("%d , %d , %d\n",sizeof(i),sizeof(c),sizeof(c+i));
    return 0;
    //a short is of 2 bytes,
    //a char type is of 1 bytes
    //when we add c + i ,it gets promoted to int and hence is of 4 bytes
}

