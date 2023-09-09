#include <stdio.h>

int main()
{
    long long int number;
    scanf("%lld", &number);
    while (number > 0)
    {
        printf("%lld", number % 10);
        number = number / 10;
    }
    printf("\n");
}