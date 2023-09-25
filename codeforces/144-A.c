#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int biggest = 0, smallest = 1000, biggesti, smallesti;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > biggest)
        {
            biggest = arr[i];
            biggesti = i;
        }
        if (arr[i] <= smallest)
        {
            smallest = arr[i];
            smallesti = i;
        }
    }

    if (biggesti < smallesti)
    {
        printf("%d\n", biggesti + n - 1 - smallesti);
    }
    else
    {
        printf("%d\n", biggesti + n - 1 - smallesti - 1);
    }
}