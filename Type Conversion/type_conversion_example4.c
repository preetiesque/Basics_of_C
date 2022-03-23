#include <stdio.h>

int main()
{
    int p = -1;
    unsigned int u = 1;
    if (p-u>-1){
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
    //here p-u is 10000000 but -1 here is also treated as unsigned number due to type conversion from signed to unsigned.
    //hence the condition becomes false and false is printed
}
