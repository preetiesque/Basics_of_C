#include <stdio.h>

int main()
{
    int (*p)[4];
    int a[4] = {1,2,3,4};
    p = &a;
    for (int i = 0 ; i < 4 ; ++ i)
        printf("%d\n",*(*p + i));
    return 0;
    //p is a pointer to 1D array of size 4
    //a is an array of size 4
    //p points towards the whole array
    //*p points to the first element of the array
    //*(*p + i) will give the value of ith element in the array
}
