#include <stdio.h>

void main()
{
    char *str = "kick";
    char **p1 = &str;
    int k = (**p1) - *(str + strlen(*p1)-1);
    
    printf("%d",k);
}
