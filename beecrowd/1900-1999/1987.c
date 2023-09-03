#include <stdio.h>

int main()
{

    int numOfDigit, number;

    while (scanf("%d %d", &numOfDigit, &number) != EOF)
    {

        int sum = 0;
        while (number > 0)
        {
            sum += number % 10;
            number /= 10;
        }
        if (sum % 3 == 0)
        {
            printf("%d sim\n", sum);
        }
        else
        {
            printf("%d nao\n", sum);
        }
    }
}
