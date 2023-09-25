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

    int secondArr[n];
    for (int i = 0; i < n; i++)
    {
        secondArr[i] = arr[i];
    }



    printf("Here is the output for second array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// 5. Write a program in C to copy the elements of one array into another array.
