#include <stdio.h>

int main()
{
    char a  = 30 , b = 40;
    unsigned char d = a * b;
    printf("%d\n",d);//firstly the number will be truncated due to char having capacity of only bits,but will promoted to int due to format specifier

    //the source is unsigned here hence 0's will be appended while int promotion/extension
}
