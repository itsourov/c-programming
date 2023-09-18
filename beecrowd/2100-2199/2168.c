#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int cameras[n + 1][n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            scanf("%d", &cameras[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cameras[i][j] + cameras[i][j + 1] + cameras[i + 1][j] + cameras[i + 1][j + 1] >= 2)
            {
                printf("S");
            }
            else
            {
                printf("U");
            }
        }
        printf("\n");
    }
}