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

    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // printf("sorted nunber\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    int smallestNumber = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > smallestNumber)
        {
            printf("second smallest %d\n", arr[i]);
            return 0;
        }
    }

    printf("There is no second smallest number");
}

// 9. Write a program in C to find the second smallest element in an array.
