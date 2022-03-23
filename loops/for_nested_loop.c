#include <stdio.h>

int main()
{
    for (int i = 0 ; i < 5 ; i ++){
        for (int j = 1 ; j <= 10 ; j ++){
            if (j > 3){
                break;
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
