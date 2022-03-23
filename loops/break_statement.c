#include <stdio.h>

int main()
{
    int a;
    while(1){
        printf("Enter the number\n");
        scanf("%d\n",&a);
        if (a==0){
            break;
        }
    }
    return 0;
}
