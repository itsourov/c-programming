// see and take idea. do it yourself
#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter row and column size of 2d array: \n");
    scanf("%d %d", &r, &c);

    int array1[r][c];
    printf("Enter values of first 2d array: \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }

    int array2[r][c];
    printf("Enter values of second 2d array: \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }

    printf("Output: \n");

    printf("Sum: \n");

    int arraySum[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arraySum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arraySum[i][j]);
        }
        printf("\n");
    }

    printf("subtraction: \n");

    int arraySub[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arraySub[i][j] = array1[i][j] - array2[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arraySub[i][j]);
        }
        printf("\n");
    }

    printf("multiplication: \n");

    int arrayMulti[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arrayMulti[i][j] = array1[i][j] * array2[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arrayMulti[i][j]);
        }
        printf("\n");
    }

    printf("divission: \n");

    int arrayDivi[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arrayDivi[i][j] = array1[i][j] / array2[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arrayDivi[i][j]);
        }
        printf("\n");
    }
}