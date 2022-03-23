#include <stdio.h>

int main()
{
    int hours = 10;
    int i = 0;
    for (i = 0;i < hours ;i ++){
        if (i == 5){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
