#include <stdio.h>
#define print(x) printf("%d",x)

int x;
void Q(int z){
    z += x;
    print(z);
}

void P(int *y){
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    print(x);
}
int main()
{
    x = 5;
    P(&x);
    print(x);
}
//global definition of x is 5.
//it is declared outside main but defined inside main as x = 5;
