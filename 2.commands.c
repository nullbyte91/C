/* A program add two integer values
 * and Displays the results */

#include <stdio.h>

int main()
{
    //Declare a variables
    int value1, value2, sum;

    //Assign values and calculate their sum
    value1 = 10;
    value2 = 20;
    sum = value1 + value2;

    //Display the result
    printf("The sum of %d and %d is %d\n", value1, value2, sum);

    return 0;

}