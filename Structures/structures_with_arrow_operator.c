#include <stdio.h>
typedef struct {
    char *a;
    char *b;
} t;

void f2(t *p);

main()
{
    t s = {"A" , "B"};
    printf("%s %s\n" , s.a , s.b);
    f2(&s); //f2(s) will not change the values
    printf("%s %s\n" , s.a , s.b);
}

void f2(t *p){
    p -> a = "V";
    p -> b = "W";
    printf("%s %s\n",p -> a , p -> b);
    return;
}
