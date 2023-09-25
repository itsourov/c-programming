#include <stdio.h>

int main()
{
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
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }