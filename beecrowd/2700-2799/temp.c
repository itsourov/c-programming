#include <stdio.h>
int main()
{

    int a = 2, b = 1, c = 3, d = 4;
    a *= a++ + ++a * b / c % d;
    
    printf("%d\n", a);
}