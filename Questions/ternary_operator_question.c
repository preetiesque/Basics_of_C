#include <stdio.h>

int main()
{
    int a = 0;
    //a = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    a = (3 > 4) ? ((3 > 2) ? 3 : 2) : ((4 > 2) ? 4 : 2);
    printf("%d\n",a);
    //question : the final value of a needs to be 4,for what values of x,y,z the value of expression will be 4?
    
}
