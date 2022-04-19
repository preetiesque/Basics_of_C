#include <stdio.h>

rer(int **ptr2 , int **ptr1){
    int *ii;
    ii = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = ii;
    **ptr1*=**ptr2;
    **ptr2+=**ptr1;
}

void main()
{
   int var1 = 5 , var2 = 10;
   int *ptr1 = &var1 , *ptr2 = &var2;
   rer(&ptr1,&ptr2);
   printf("%d %d",var2,var1);
}
