#include <stdio.h>

int main()
{
    fun(2);
}
void fun(int n){
    printf("%d",n);
    for (int i = 0; i < 2 ; i ++){
        if (n > 0) fun(n-1);
    }
}
