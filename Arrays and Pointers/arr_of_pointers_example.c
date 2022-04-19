#include <stdio.h>

 main()
{
    char a[] = "GATE";
    char b[] = "GO";
    char c[] = "Overflow";
    char d[] = "Classes";
    
    char *p[] = {a,b,c,d};
    
    printf("%c" , *p[3]);
    printf("%c" , (*p)[3]);
}
