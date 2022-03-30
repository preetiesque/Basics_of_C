#include <stdio.h>

int strlength(char*c){
    int i = 0;
    while(c[i] != '\0'){
        i++;
    }
    return i;
}

int main()
{
    char c[] = "Preeti Shantilal Chaudhari";
    printf("%d\n",strlength(c));
    
}
