#include <stdio.h>
typedef struct {
    char *a;
    char *b;
} t;

void f1(t s);

main()
{
    t s = {"A" "B"};
    printf("%s %s\n",s.a,s.b);
    f1(s);
    printf("%s %s\n",s.a,s.b);
    printf("%c %c\n",*s.a,*s.b);
}

void f1(t s){
    s.a = "U";
    s.b = "V";
    printf("%s %s\n",s.a,s.b);
    return;
}
