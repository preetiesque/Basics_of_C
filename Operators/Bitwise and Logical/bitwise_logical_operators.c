#include <stdio.h>

int main()
{
    int k , i = 50 , j = 100, l;
    i = i | (j && 100); //50 | (1) 
    k = i || (j || 100);//the next part of statement is not executed,the value of k is 1
    l = i & (j && 100);//bpth parts are executed hence the value is true and j is 1
    printf("%d %d\n",i,j);
    printf("%d %d\n",k,l);
}
