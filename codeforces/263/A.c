#include <stdio.h>

int main()
{

    int rowOf1 = 0, colOf1 = 0, input;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &input);
            if (input == 1)
            {
                rowOf1 = i;
                colOf1 = j;
            }
        }
    }

    int rowMove = 3 - rowOf1;
    if (rowMove < 0)
    {
        rowMove *= (-1);
    }

    int colMove = 3 - colOf1;
    if (colMove < 0)
    {
        colMove *= (-1);
    }

    printf("%d\n", rowMove + colMove);
}