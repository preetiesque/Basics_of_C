#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5,6};
    int * ptr = (int *)(&a + 1); //&a points to entire array , when we do &a +1 ,it skips whole array
    // and *ptr which is an int pointer points the next element after array
    
    printf("%d",*(ptr - 1));
    //when we do ptr - 1 ,it points to 6 , it comes 1 integer back because *p is an integer pointer
    return 0;
}
