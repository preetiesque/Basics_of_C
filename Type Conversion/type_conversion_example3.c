#include <stdio.h>

int main()
{
    int p = -1;
    unsigned int u = 1;
    if (p-u > 1){
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
    
    //it seems to appear that p-u == -2 which is less than 1;but herep is promoted to unsigned and if added to 
    //1 it gives 10000000 which is bigger than 1.
    //hence true is printed
    
}
