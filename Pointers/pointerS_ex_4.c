#include <stdio.h>
int foo(int i){
    i = i + 2;
    return i;
}
int main()
{
    int a = 2;
    int *b = &a;
    foo(*b);
    foo(*b);
    printf("%d",a);
}
