#include <stdio.h>
int main()
{

    int A = 2, B = 5, C = 3;
    B = B * B + A - C / A + C % A;
    printf("%d\n", B);
}