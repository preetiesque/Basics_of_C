#include <stdio.h>

int main()
{
    int x = 2,y = 5;
    y = jumble(y,x);
    x = jumble(y,x);
    printf("%d\n",x);
    return 0;
}

int jumble(int x, int y){
    x = 2 * x + y;
    return x;
}
//value is updated accordingly to the function 

