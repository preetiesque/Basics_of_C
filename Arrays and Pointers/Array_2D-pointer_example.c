#include <stdio.h>
void fun (int (*c)[4]){
    printf("%u\n",sizeof(c)); //we are just passing the address here ,so size of address will be 8
    
    (*c+1)[2] = 4;
    c++;
    *c[1] = 6;
    (*c)[1] = 8;
}

main()
{
   int c[3][4] = {{1,3,0,-5},{-1,5,9,8},{3,5,99,7}};
   printf("%u\n",sizeof(c)); //c is the entire 2D array , so the size of c will be 4*12 = 48
   
   fun(c);
   
   for (int i = 0 ; i < 3 ; i ++){
       for (int j = 0 ; j < 4 ; j ++)
           printf("%d",c[i][j]);
        printf("\n");
   }    
}
