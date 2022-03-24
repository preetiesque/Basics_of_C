#include <stdio.h>

int main()
{
    //ASSOCIATIVITY AND PRECEDENCE operator
    //ASSIGNMENT OPERATOR HAVE THE LEAST OPERATORS
    //UNARY AND BINARY OPERATORS
    //short circuiting in C

    int a = 1, b = 1,c = 1;
    if (a==b || c ++){
        printf("%d\n",c);
        //the value of c will never get incremented because it never goes to second part of condition due to
        // the first condition being true in ||
    }
}
