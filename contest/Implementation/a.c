#include <stdio.h>
#include <stdlib.h>

#define int long long

void solve()
{
    int n, q;
    scanf("%lld %lld", &n, &q);

    int type, x, y;
    int lastAns = 0;
    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        arr[i] = NULL;
    }

    int *ans = (int *)malloc(q * sizeof(int));
    int ans_count = 0;

    for (int i = 0; i < q; i++)
    {
        scanf("%lld %lld %lld", &type, &x, &y);
        if (type == 1)
        {
            int idx = (x ^ lastAns) % n;
            if (arr[idx] == NULL)
            {
                arr[idx] = (int *)malloc(sizeof(int));
                arr[idx][0] = y;
            }
            else
            {
                int size = 0;
                while (arr[idx][size] != 0)
                {
                    size++;
                }
                arr[idx] = (int *)realloc(arr[idx], (size + 1) * sizeof(int));
                arr[idx][size] = y;
            }
        }
        else
        {
            int idx = (x ^ lastAns) % n;
            int size = 0;
            while (arr[idx][size] != 0)
            {
                size++;
            }
            lastAns = arr[idx][y % size];
            ans[ans_count++] = lastAns;
        }
    }

    for (int i = 0; i < ans_count; i++)
    {
        printf("%lld\n", ans[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != NULL)
        {
            free(arr[i]);
        }
    }
    free(arr);
    free(ans);
}

int main()
{
    int t = 1;
    // scanf("%lld", &t);

    while (t--)
    {
        solve();
    }

    return 0;
}
