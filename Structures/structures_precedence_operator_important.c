#include <stdio.h>

struct student {
    int x;
};
//PROGRAM IMPORTANT FOR PRECEDENCES OF VARIOUS OPERATORS

struct student s[2]; //global declaration of struct

void main()
{
    s[0].x = 10;
    s[1].x = 1; //inside each array index we have a struct
    struct student *m;
    m = s;
    printf("%d\n",m -> x ++); //10 : as per the precedence we first what is inside x and then increment its value,but since it is postfix,the increment is reflected in next line
    printf("%d\n",m -> x); //11 :now we will fetch what is inside x and now the increment is reflected
    printf("%d\n",m ++-> x); //11 :both have same precedence so we go from left to right(associativity);pointer now points to s[1] and fetches the value of x i.e 1,but this will still print 11 due to postfix operator,the increment will reflect in next line
    printf("%d\n",m -> x); //1 : now pointing to s[1] ,value of x is fetched and then 1 is printed
    printf("%d\n",++m -> x); //2 : now as per the precedence ; -> has more priority than prefix operator , so it will point to s[1] and then increment to 2 and immediately print 2 because prefix operator
    printf("%d\n",m -> x);// 2 :now we just fetch the value of x i.e. 2
    
    
}
