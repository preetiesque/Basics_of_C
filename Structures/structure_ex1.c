#include <stdio.h>

struct person {
    char name[20];
    int age;
};

struct person p[3] = {
    {"mike",29},
    {"heraalal",33},
    {"subramanya",37}
};

int main()
{
    printf("%s %d\n" , p[0].name , p[0].age);
    printf("%s %d\n" , p[1].name , p[1].age);
    printf("%s %d\n" , p[2].name , p[2].age);
}
