#include <stdio.h>
#include <string.h>

int main()
{
    int n, count;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        count = 1;
        while (1)
        {

            int input[n];
            int allOk = 1;
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &input[i]);
                if (i > 0)
                {
                    if (input[i] <= input[i - 1])
                    {
                        allOk = 0;
                    }
                }
            }

            if (allOk)
            {
                printf("%d\n", count);
                break;
            }
            else
            {
                count++;
            }
        }
    }
}
