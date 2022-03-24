#include <stdio.h>

int main()
{
    int x = 7;
    int y = 10;
    int z = 5;
    int result;
    result = (++y - 10) || (z - 5 && x ++);
    result += (y ++ - 11) || (z - 5 && x ++);
    result += y + 1 > 11 && (z ++ >= 6 || x ++);
    
    printf("result: %d\n",result);
    printf("x : %d\n",x);
    printf("y : %d\n",y);
    printf("z : %d\n",z);
}
