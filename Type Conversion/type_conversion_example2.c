#include <stdio.h>

int main()
{
    int p = -1;
    unsigned u = 1;
    
    char c = p + u;
    printf("%u\n",c);
    //p is initially signed but will get promoted to unsigned while getting added with unsigned u.
    //unsigned -1 is a huge number and while adding 1 we will get 10000000...but due to char c it will get
    //truncated to 8 bit and hence 0 is the answer
}
