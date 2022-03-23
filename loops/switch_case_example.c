#include <stdio.h>

int main()
{
    int value = 0;
    switch(value){
        default:
        value++;
        
        case 2:
        printf("humans are human centric\n");
        break;
        
        case 1:
        printf("This is inhuman\n");
    
    }
    printf("%d\n",value);
    //the value is initially set to 0.it will first enter the default case and increment the value to 1.
    //as there is no break statement it will execute case 2 and print the statement.
    //but here we have break statement and hence it will come out of switch
}

