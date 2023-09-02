#include <stdio.h>

int calculatePower(int number, int power)
{

    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= number;
    }
    return result;
}
int getNumberOfDigit(int number)
{
    int count = 0;
    while (number > 0)
    {

        number = number / 10;
        count++;
    }
    return count;
}
int main()
{

    int input, digitInBiggestNumber;
    while (1)
    {
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }
        int arr[input][input];

        for (int i = 0; i < input; i++)
        {
            for (int j = 0; j < input; j++)
            {
                arr[i][j] = calculatePower(2, i + j);
            }
        }

        digitInBiggestNumber = getNumberOfDigit(arr[input - 1][input - 1]);

        for (int i = 0; i < input; i++)
        {
            for (int j = 0; j < input; j++)
            {

                if (j == input - 1)
                {
                    printf("%*d", digitInBiggestNumber, arr[i][j]);
                }
                else
                {
                    printf("%*d ", digitInBiggestNumber, arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}