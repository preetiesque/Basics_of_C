#include <stdio.h>

void addAbs(int,int,int*);

int main()
{
    int a;
    addAbs(1,2,&a);
    printf("a = %d",a);
}
void addAbs(int a,int b,int *sum){
    (*sum) = a + b;
    if ((*sum) < 0){
        (*sum) = -(*sum);
    }
    return;
}