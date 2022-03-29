#include <stdio.h>


void main()
{
    int i = 5 ,j = 2;
    printf("%d,%d\n",i,j);
    testPass(i,&j);
    printf("%d,%d\n",i,j);
}
void testPass(int x , int *y){
    x++;
    (*y)++;
    printf("%d,%d\n",x,*y);//silly mistake of scope
}
