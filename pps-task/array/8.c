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
            if (arr[i] > arr[j])
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

    int biggestNumber = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < biggestNumber)
        {
            printf("second Leargest %d\n", arr[i]);
            return 0;
        }
    }

    printf("There is no second leargest number");
}

// 8. Write a program in C to find the second largest element in an array.
