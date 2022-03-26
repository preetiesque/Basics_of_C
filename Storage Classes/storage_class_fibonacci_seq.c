#include <stdio.h>
fib_term(){
    static int a = 0 , b = 1;
    int c ;
    c = a + b;a = b;b = c;
    return c;
}

int main()
{
    int count = 0,i;
    
    for (i = 0 ; i < 5;i ++){
        printf("%d",fib_term());
    }
    //Code for printing fibonaaci sequence
    //output : 1,2,3,5,8
}


//   i =  0     1     2    3    4
//   a =  1     1     2    3    5    
//   b =  1     2     3    5    8
//   c =  1     2     3    5    8
//
