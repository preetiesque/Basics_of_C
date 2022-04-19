#include <stdio.h>

int main(void)
{
    int (*p)[3];
    int a[3] = {0,1,2};
    p = &a;
    
    printf("%d %d %d\n" , (*p)[0] ,(*p)[1] , (*p)[2]);
    
    return 0;
}
