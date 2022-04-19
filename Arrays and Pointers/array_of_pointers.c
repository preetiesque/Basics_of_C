#include <stdio.h>

int main(void)
{
    int a[3] = {0,1,2};
    int *p[3] = {a,a+2,a+1};
    
    printf("%d %d %d\n",*(p[0]) , *(p[1]) , *(p[2]));
    *(p[1]) = 3;
    
    printf("%d %d %d\n" ,a[0] , a[1] , a[2]);
    
    return 0;
}
