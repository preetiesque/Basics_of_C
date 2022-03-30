#include <stdio.h>
int strlength(char c[]){
    int i = 0;
    while(*c != '\0'){
        c ++;
        i ++;
    }
    return i;
}

int main()
{
    char c[] = "Hello";
    printf("%d\n",strlength(c));
}
//char * c / char c[6] / char c[0] / char c[] gets converted internally to pointer by the compiler
//we cannot pass whole array into the argument,only the pointer pointing to first element of array gets passed