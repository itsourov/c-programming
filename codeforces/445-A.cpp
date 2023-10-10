#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char input[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> input[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (input[i][j] == '.')
            {
                if (i % 2 == j % 2)
                    printf("B");
                else
                    printf("W");
            }

            else
            {
                printf("-");
            }
        }

        printf("\n");
    }
}