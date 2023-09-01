#include <stdio.h>
int main()
{
    int result;
    int firstNumber, secondNumber;
    char symbol;
    scanf("%d", &result);
    scanf("%d %c %d", &firstNumber, &symbol, &secondNumber);

    if (symbol == '+')
    {
        if (firstNumber + secondNumber <= result)
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n");
        }
    }
    else
    {
        if (firstNumber * secondNumber <= result)
        {
            printf("OK\n");
        }
        else
        {
            printf("OVERFLOW\n");
        }
    }
}