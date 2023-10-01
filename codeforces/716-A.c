#include <stdio.h>

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);

    int count = 1;
    int input;
    int previousInput;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            previousInput = input;
        }
        scanf("%d", &input);

        if (i > 0)
        {
            if (input - previousInput > c)
            {
                count = 1;
            }
            else
            {
                count++;
            }
        }
    }

    printf("%d\n", count);
}