#include <stdio.h>

int main()
{
    int test = 1;
    int number = 5;
    if (number & test){
        printf("Number is odd\n");
    } else {
        printf("Number is even\n");
    }
    //bitwise & operator(there is a difference between logical and bitwise & and |
    //here both number and test are converted to there binary patterns
    //& operation is performed with the binary patterns
    // here the last bit of binary patterns of number and test is 1 which is equivalent to TRUE
    //as the condition is tru the of block gets executed
    // test = 1 :  00000000000001
    //number = 5 : 00000000000101
    //             _______________
    //& operation: 00000000000001
    //1 is equal to true hence the if block is executed
}
