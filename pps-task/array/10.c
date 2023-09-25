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
    int oddCount = 0, evenCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Odd %d\n", oddCount);
    printf("Even %d\n", evenCount);
}

// 10. Write a C program to count total number of even and odd elements in an array.