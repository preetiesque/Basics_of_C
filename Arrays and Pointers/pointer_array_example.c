#include <stdio.h>

int main()
{
    int a[10] = {11,22,33,44,55,66,77,88,99,777};
    int i;
    int *p;
    
    printf("Array a[]: ");
    for (i = 0 ; i < 10 ; i ++)
    printf("%d ",a[i]);
    printf("\n");
    
    p = &a[0];
    printf("*(p++) = %d\n" , *(p++) );
    printf("*(p++) = %d\n" , *(p++) );
    printf("*(p++) = %d\n" , *(p++) );
    printf("*(p++) = %d\n" , *(p++) );
}
