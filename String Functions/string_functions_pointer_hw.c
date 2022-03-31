#include <stdio.h>

int strmst(char*s,char a, char b){
    int count = 0;
    while(*s != NULL){
        if (*s == a){ //silly mistake of checking a instead of s
            *s = b;
            count ++;
        }
        s++;
    }
    return count;
}

int main()
{
    char s[] = "GO Classes";
    char a = 's';
    char b = 't';
    printf("%d\n",strmst(s,a,b));
}
