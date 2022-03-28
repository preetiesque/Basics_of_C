#include <stdio.h>

int main()
{
  int res = f(1);
  printf("%d\n",res);
}
int f(int n){
    static int i = 1;
    if (n >= 5)return n;
    n = n + i;
    i ++;
    return f(n);
}

