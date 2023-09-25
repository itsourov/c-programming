#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 1)
    {
        printf("-1\n");
        return 0;
    }

    int arr[n], temp;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

     for (int i = 1; i < n; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            printf("%d\n", arr[i]);
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }
}