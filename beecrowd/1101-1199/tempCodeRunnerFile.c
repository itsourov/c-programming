#include <stdio.h>
int main()
{

    int n, input, maxNumber;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        if (i == 0 || input > maxNumber)
        {
            maxNumber = input;
        }
    }
    printf("%d\n", maxNumber);
}