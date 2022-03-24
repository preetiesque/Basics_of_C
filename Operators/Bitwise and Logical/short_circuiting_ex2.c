#include <stdio.h>

int main()
{
    int a = 1, b = 1, c = 1;
    if (a != b || c ++){
        printf("%d\n",c);
        //the flow goes to the second part of the condition because a != b is FALSE
        //the value of c doesn't get incremented becuase of post-increment operator and as it true the whole 
        // condition becomes true,but now the value of c is incremented to 2
    }
}
