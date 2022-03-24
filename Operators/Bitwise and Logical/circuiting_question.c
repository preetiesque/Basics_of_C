#include <stdio.h>

int main()
{
    int i,j,count;
    count = 0;
    i = 0;
    for(j = -3 ; j <= 3 ; j ++){
        if ((j >= 0) && (i ++)){
            count = count + j;
        }
        count = count + i;
        printf("%d\n",count);
        //return 0;
        //question : find the value of count at the end ?
        //check
    }
}
