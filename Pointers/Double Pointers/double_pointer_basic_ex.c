#include <stdio.h>
//DOUBLE POINTERS
int main()
{
    int x,y;
    int*p1;
    int**p2;
    x = 100;
    y = 200;
    p1 = &x;
    p2 = &p1;
    
    printf("%d\n",**p2);
    *p2 = &y;
    printf("%d\n",**p2);
}
