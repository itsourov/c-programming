#include <stdio.h>
int main()
{

    int arr[] = {2, 4, 6, 6, 8, 5, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int query;
    scanf("%d", &query);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == query)
        {
            printf("%d was found in index %d\n", query, i);
            return 0;
        }
    }
    printf("%d was not found.\n", query);
}