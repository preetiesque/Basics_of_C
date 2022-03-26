#include <stdio.h>
extern int i = 10;

int main()
{
    extern int i;
    printf("%d",i);
    return 0;
    //the program will print 10,because the global declaration is proper and extern variable is defined properly
    // the extern in main points to global extern i
}
