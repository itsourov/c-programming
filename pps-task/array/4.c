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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("average = %lf\n", (double)sum / n);
}

// 4. Write a program in C to find the average of all elements of the array.
