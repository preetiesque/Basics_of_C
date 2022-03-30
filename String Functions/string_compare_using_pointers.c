#include <stdio.h>

int strcompare(char *s1,char *s2){
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0'){
        if(s1[i] == s2[i]){
            i++;
        } else if (s1[i] < s2[i]){
            return -1;
        } else {
            return 1;
        }
    }
    return 0;
}
int main()
{
    char*s1 = "abc";
    char*s2 = "abzyt";
    int res = strcompare(s1,s2);
    printf("%d\n",res);
}
