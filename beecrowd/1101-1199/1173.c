#include <stdio.h>
int main()
{
    int arr[10] = {}, x, temp;
    scanf("%d", &x);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = x;
        x *= 2;

        printf("N[%d] = %d\n", i, arr[i]);
    }
}