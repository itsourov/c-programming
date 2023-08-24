#include <stdio.h>
int main()
{
    int arr[10] = {}, temp;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &temp);
        if (temp < 1)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = temp;
        }
        printf("X[%d] = %d\n", i, arr[i]);
    }
}