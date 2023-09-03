#include <stdio.h>

int main()
{

    int numOfDigit, number;
    scanf("%d %d", &numOfDigit, &number);
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    if (sum % 3 == 0)
    {
        printf("%d sim\n");
    }
    else
    {
        printf("%d nao\n");
    }
}
