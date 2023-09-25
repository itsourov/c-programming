#include <stdio.h>

int main()
{
    int n;
    printf("How many elemtnt should be in the array?\n");
    scanf("%d", &n);

    printf("input them one by one.\n");
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int arrOfOdd[n], arrOfEven[n];
    int oddIndex = 0, evenIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arrOfEven[evenIndex] = arr[i];
            evenIndex++;
        }
        else
        {
            arrOfOdd[oddIndex] = arr[i];
            oddIndex++;
        }
    }

    printf("Outputing the even array\n");
    for (int i = 0; i < evenIndex; i++)
    {
        printf("%d ", arrOfEven[i]);
    }
    printf("\n");

    printf("Outputing the odd array\n");
    for (int i = 0; i < oddIndex; i++)
    {
        printf("%d ", arrOfOdd[i]);
    }
    printf("\n");
}

// 7. Write a program in C to separate odd and even integers into separate arrays.
