#include <stdio.h>
int main()
{
    int n, smallestNumber, positon;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        if (i == 0)
        {
            smallestNumber = x[i];
            positon = i;
        }
        else
        {
            if (x[i] < smallestNumber)
            {
                smallestNumber = x[i];
                positon = i;
            }
        }
    }
    printf("Menor valor: %d\n", smallestNumber);
    printf("Posicao: %d\n", positon);
}
