#include <stdio.h>

int main()
{
    //COMMA operator
    int i,j=2;
    for (i = 0 ; i <= 5 , j >= 0 ; i ++){
        printf("%d\n",i + j);
        j--;
    }
    return 0;
    //here the condition i <= 5 is redundant because the comma operator considers the rightmost operation
    //hence the value is printed as per the condition j >= 0
    
    
}
