#include <bits/stdc++.h>
#define INF 10000
using namespace std;

int row[] = {1, -1, 0, 0};
int col[] = {0, 0, 1, -1};
int main()
{
    char maparr[1001][1001];
    int level[1001][1001];
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int r, c;
        scanf("%d %d", &r, &c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                level[i][j] = INF;
            }
        }

        for (int i = 0; i < r; i++)
        {
            scanf("%s", maparr[i]);
        }

        deque<pair<int, int>> dq;
        dq.push_back({0, 0});
        level[0][0] = 0;
        while (!dq.empty())
        {
            int i = dq.front().first;
            int j = dq.front().second;
            dq.pop_front();
            for (int k = 0; k < 4; k++)
            {
                int ci = i + row[k];
                int cj = j + col[k];
                if (ci >= 0 && ci < r && cj >= 0 && cj < c)
                {
                    if (maparr[ci][cj] == maparr[i][j] && level[ci][cj] > level[i][j])
                    {
                        dq.push_front(pair<int, int>(ci, cj));
                        level[ci][cj] = level[i][j];
                    }
                    if (maparr[ci][cj] != maparr[i][j] && level[ci][cj] > level[i][j] + 1)
                    {
                        dq.push_back(pair<int, int>(ci, cj));
                        level[ci][cj] = level[i][j] + 1;
                    }
                }
            }
        }
        printf("%d\n", level[r - 1][c - 1]);
    }
    return 0;
}