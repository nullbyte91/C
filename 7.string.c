#include <stdio.h>

int main()
{
    char a[] = "abcd";
    char b[50] = "abcd";
    char c[] = {'a', 'b', 'c', 'd', '\0'};
    printf("%zu", sizeof(c));
    return 0;
}