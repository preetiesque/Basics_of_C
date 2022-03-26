#include <stdio.h>
extern int i;

int main()
{
    i = 5;
    printf("%d",i);
    return 0;
}
//there will be linker error,althought the program compilation will be successful.
//we use extern keyword to say that i will  be defined somewhere in the program but it is not defined
//hence linker error