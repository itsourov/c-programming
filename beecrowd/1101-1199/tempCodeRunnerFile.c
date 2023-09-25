#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int foundCount = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == numbers[j])
            {
                foundCount++;
                break;
            }
        }
    }
    if (foundCount == n)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}