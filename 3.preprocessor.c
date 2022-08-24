#include <stdio.h>
#define VALUE1 10 //user defined Macros
#define VALUE2 20

int main()
{
    int sum;

    sum = VALUE1 + VALUE2;

    //Display the result
    printf("The sum of %d and %d is %d\n", VALUE1, VALUE2, sum);

    printf("Time :%s\n", __TIME__ ); //Predefined Macros
    printf("Line :%d\n", __LINE__ ); //Predefined Macros
    return 0;

}