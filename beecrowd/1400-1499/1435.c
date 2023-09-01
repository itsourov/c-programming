#include <stdio.h>
int main()
{
    int input;
    while (1)
    {
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }
        int arr[input][input];

        for (int i = 0; i < input; i++)
        {
            for (int j = 0; j < input; j++)
            {
                arr[i][j] = 1;
            }
        }

        for (int k = 0; k < input / 2; k++)
        {
            for (int i = 0; i < input; i++)
            {
                for (int j = 0; j < input; j++)
                {
                    if (i > k && j > k && input - i - 1 > k && input - j - 1 > k)
                    {
                        arr[i][j] += 1;
                    }
                }
            }
        }

        for (int i = 0; i < input; i++)
        {
            for (int j = 0; j < input; j++)
            {

                if (j == input - 1)
                {
                    printf("%3d", arr[i][j]);
                }
                else
                {
                    printf("%3d ", arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}