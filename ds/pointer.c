#include <stdio.h>
int main()
{
    int a = 10;
    int *b;
    b = &a;
    *b = 11;
    printf("value of 'a' is %d.\n", a);
}