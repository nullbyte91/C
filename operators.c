#include <stdio.h>

int main()
{
    /* Arithmetic Operators */
    int a = 20, b = 10;
    printf("Add :%d \n", a + b); //30
    printf("Sub:%d \n", a - b);  //10
    printf("MUl:%d \n", a * b);  //200
    printf("Division:%d \n", a / b); //2
    printf("Reminder:%d \n", a % b); //0
    printf("Preincrement:%d \n", ++a); //21
    printf("Postincrement:%d \n", a++); // The value remain same as previous one..why?
    printf("a value after Post incre:%d \n", a); //22
    printf("Predecrement:%d \n", --a); //21
    printf("Postdecrement:%d \n", a--); //21

    /* Logical Operators */
    int c = 0;
    if ( a && b){  // AND operator
        printf("The condition is true \n"); //This Print
    }
    
    if ( c && b)
    {
        printf("The condition is true \n");
    } else {
        printf("The condition is False\n"); //This Print
    }

    if ( c || b)  // OR Operator
    {
        printf("The condition is true\n"); //This Print
    } else {
        printf("The condition is False\n");
    } 

    if (!c)     // NOT operator
    {
        printf("The condition is true\n"); //This Print
    }
    
    /* Assignment Operator */
    c = 10; // Assignment Opertor
    c += 10; // Add AND 
    printf("Add AND:%d \n", c); //20

    c -= 10; // Sub AND 
    printf("Sub AND:%d \n", c); //10
    
    return 0;
}