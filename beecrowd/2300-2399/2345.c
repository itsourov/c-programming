#include <stdio.h>
int main()
{

    int arr[4], temp;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 4 - 1; i++)
    {
        for (int j = 0; j < 4 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d-", arr[i]);
    // }

    int diff = (arr[0] + arr[3]) - (arr[1] + arr[2]);
    if (diff < 0)
    {
        diff = 0 - diff;
    }

    printf("%d\n", diff);
}