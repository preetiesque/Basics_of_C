#include <stdio.h>

int main()
{
    int array[] = {4,6,12,-5,-7,3,1,0,-10};
    int *ptr1,*ptr2;
    ptr1 = array + 2;
    ptr2 = &ptr1[5];
    
    //Question 1
    printf("%d\n",*(ptr1+1));
    
    //Question 2
    printf("%d\n",*(ptr2-3));
}
