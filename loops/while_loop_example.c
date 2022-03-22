#include <stdio.h>

int main()
{
    //LOOPS IN C PROGRAMMING: DO WHILE,WHILE,FOR
    int s = 0;
    int a;
    scanf("%d\n",&a);
    while(!(a == -1)){
        s = s+a;
        scanf("%d\n",&a);
    }
    printf("%d\n",a);
    //program continues to take input from the user until the user hits -1
}

