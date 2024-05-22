#include <stdio.h>
int main()
{

    int arr[] = {2, 4, 6, 6, 8, 5, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        printf("index %d has value : %d\n", i, arr[i]);
    }
    
}