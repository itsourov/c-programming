#include <stdio.h>
int main()
{
    int n[20], temp;
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        temp = n[i];
        n[i] = n[20 - i - 1];
        n[20 - i - 1] = temp;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }
}