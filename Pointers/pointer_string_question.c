#include <stdio.h>

int main()
{
    char str1[80] , str2[80],*p1,*p2;
    printf("Enter first string : Lesser than 80 length");
    scanf("%s",str1);
    printf("Enter second string : Lesser than 80 length");
    scanf("%s",str2);
    p1 = str1;
    p2 = str2;
    
    while (*p1 && *p2){
        if (*p1 != *p2) break;
        else{
            p1++;
            p2++;
        }
    }
    if (!*p1 && !*p2)
     printf("1");
    else
     printf("0");
    return 0;
    
    
}
