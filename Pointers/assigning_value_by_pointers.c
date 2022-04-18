#include <stdio.h>

int main()
{
    int n;
    int *p;
    
    p = &n;
    
    *p = 2;
    *p = *p + *p;
    
    printf("%d",n);
}
