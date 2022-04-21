#include <stdio.h>

char * func(){
    char str[10] = {'H','e','l','l','o'};
    return str;
}

main()
{
    char * c ; 
    c = func();
}

//after returning the function activation record func() gets destroyed
// c becomes a dangling pointer we cannot do c[0] = x
