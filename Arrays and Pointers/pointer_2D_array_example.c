
#include <stdio.h>

void dis(int (*p)[3]){
    p = p + 1;
    *(*p + 1) = 0;
    *(*p - 3) = 9;
}

void main()
{
   int a[2][3] = {
       {1,2,3},
       {4,5,6}
   };
   dis(a);
   
   for (int i = 0; i < 2 ; i ++){
       for (int j = 0 ; j < 3 ; j ++){
           printf("%d" , a[i][j]);
       }
       printf("\n");
   }
}
