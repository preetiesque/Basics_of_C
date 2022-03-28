#include <stdio.h>

void fun(){
    extern int i;
    i++;
}

int main()
{
   fun();
   extern int i;
   i++;
   printf("%d",i);
}
int i;
//when the function fun is called the value of i gets updated from 0 to 1 globally becuase we extern int i.
//if in function we have used only int i,then value would have been updated locally and the answer would be 1.
