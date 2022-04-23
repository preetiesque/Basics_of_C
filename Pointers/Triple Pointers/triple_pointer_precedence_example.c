#include <stdio.h>

int main()
{
    char *s[] = {
        "ice",
        "green",
        "cone",
        "please"
    };
    
    char **ptr[] = {s+3,s+2,s+1,s}; //array double pointers which stores the addresses of single pointers
    
    char ***p = ptr; //triple pointer pointing to an array of double pointers

    printf("\n %s",**++p); //precedencer of operators
    
    printf("\n %s", *--*++p+3);
    
    printf("\n %s",*p[-2]+3);
    
    printf("\n %s",p[-1][-1]+1);
}
