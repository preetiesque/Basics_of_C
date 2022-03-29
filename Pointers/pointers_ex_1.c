#include <stdio.h>
void my_fun(int x,int *y,int *z){
    x = *y + 3;
    *y = x + *z;
    *z = *y + x;
}

int main()
{
    int a = 1,b = 2,c = 3;
    my_fun(a, &b,&c);
    printf("%d %d %d",a,b,c);
    return 0;
}
