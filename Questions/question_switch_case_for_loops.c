#include <stdio.h>

int main()
{
    int i,j,k = 0 ;
    j = 2 * 3 / 4 + 2.0 / 5 + 8 / 5;
    k -= --j;
    for (i = 0 ; i < 5 ; i ++){
        switch (i + k){
            case 1 :
            case 2 : printf("%d\n",i + k);
            case 3 : printf("%d\n",i + k);
            default : printf("%d\n",i + k);
        }
    }
    return 0;
}//question : how many times print statement will be executed
