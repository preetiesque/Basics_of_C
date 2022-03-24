
#include <stdio.h>

int main()
{
    int i = 0,j = 1, k =2,m;
    m = (i ++ || j ++) || k ++;
    printf("%d %d %d %d\n",m,i,j,k);
    //at the particular moment the value of i is 0 ,hence j is checked,along with it side effect of post 
    //increment occurs where i and j value is incremented.
    //the next part is not checked and hence k value stays the same.
    
}
