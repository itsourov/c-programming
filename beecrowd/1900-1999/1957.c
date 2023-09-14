#include <stdio.h>
char decimalToHexa(int number)
{
    if (number <= 9)
    {
        return number + 48;
    }
    else
    {
        return number + 'A' - 10;
    }
    return 'O';
}

int main()
{

    int number, count = 0;
    char decimal[20];
    scanf("%d", &number);

    while (number > 0)
    {
        decimal[count] = decimalToHexa(number % 16);
        count++;
        number = number / 16;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%c", decimal[i]);
    }

    printf("\n");
}
