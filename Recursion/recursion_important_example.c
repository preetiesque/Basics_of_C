#include <stdio.h>

int main()
{
    int result = fun1(5);
    printf("%d\n",result);

    
}
void fun1(int n){
    if (n == 0) return;
    printf("%d",n);
    fun2(n-2);
    printf("%d",n);
}

void fun2(int n){
    if (n == 0) return;
    printf("%d",n);
    fun1(++n);
    printf("%d",n);
}
