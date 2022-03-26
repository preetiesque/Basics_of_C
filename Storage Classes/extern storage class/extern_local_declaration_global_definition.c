#include <stdio.h>

int main()
{
    extern int i;
    printf("%d",i);
    return 0;
}
int i = 100;
//the extern declared in the main function points to the glbal definition of i = 100
