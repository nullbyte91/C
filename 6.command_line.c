#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )  
{
    int h_i, h_w;
    if( argc > 1 ) {
        printf("The argument supplied is %s\n", argv[1]);
        printf("The argument supplied is %s\n", argv[2]);
        h_i = atoi(argv[1]);
        h_w = atoi(argv[2]);
    }
    else if( argc > 2 ) {
        printf("Too many arguments supplied.\n");
    }
    else {
        printf("One argument expected.\n");
    }
    printf("h_i:%d h_w:%d\n", h_i, h_w);
}