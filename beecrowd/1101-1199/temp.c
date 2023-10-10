#include <stdio.h>
int main()
{

    int n, savedAll = 1, i;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= 20)
        {
            savedAll = 0;
        }
    }

    if (savedAll == 1)
    {
        printf("Saved All\n");
    }
    else
    {
        printf("Only few are saved and the following are dead:\n");
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= 20)
            {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    }
}