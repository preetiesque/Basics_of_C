//PRECEDENCE OF OPERATORS (NO STRUCTURES)
#include <stdio.h>

void main()
{
    int *ptr;
    int a[10] = {1,6,9,5,2,7,4,10,3};
    ptr = a;
    
    printf("%d ",*ptr++); //1 : priority of postfix ++ operator is more so, it will point to 6 and fetch value of 6,but in actual as it is postfix operator,the change will reflected in next line and will print 1
    printf("%d",*ptr); //6 : now the change of postfix operator is reflected and 6 will  be printed
    
    printf("%d ",++*ptr); //7 ++ prefix and * dereference have same priority ,due to right to left associativity , value of *ptr will be fetched and incremented and change is immediately reflected due to prefix operator,hence 7 is printed
    printf("%d", *ptr);//7 now simply the value stored in ptr is printed i.e.7
    
    printf("%d ",*++ptr);//9 : * and ++ have same priority , first ptr will be incremented and points to next value and change is reflected immediately due to prefix operator and the value is fetched i.e. 9
    printf("%d", *ptr);//9 : simply value of 9 is fetched
    //keep the spaces in mind
}
