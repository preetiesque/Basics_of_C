#include <stdio.h>

int main()
{
    char str[] = "Stanford University"; //the compiler will deduce the size on its own and add null char at the end
    char a = str[1]; // the char at first index is stored in a i.e. t
    char b = *(char*)((int *)str + 3);
    //first the str which is char type pointer is typecasted to int type pointer
    //then it is made to skip by 3,now as it is int type pointer it skips by 4*3 char and points to it
    //then again typecasted to char type pointer and the value is fetched which is v.
    char c = str[sizeof(int*)];
    //size of int* ,which is an address (int pointer) is 8 bytes,hence str[8] i.e just a space.
    // int* and *int are two different things
    //*int helps us to fetch the value and int* is an address
    
    printf("%c\n",a);
    printf("%c\n",b);
    printf("%c\n",c);
    
}
