#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
int n;
bool visited[10][10];
char arr[10][10];
char nArr[10][10];

void permutation(int index, int count, int needed)
{

    int row = index / n;
    int col = index % n;

    if (count == needed)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << nArr[i][j];
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

    if (index > (n * n) - 1)
    {
        return;
    }
    if (arr[row][col] == 'X')
    {
        nArr[row][col] = '.';
        permutation(index + 1, count + 1, needed);
        nArr[row][col] = 'X';
        permutation(index + 1, count, needed);
    }
    else
    {
        permutation(index + 1, count, needed);
    }
}
void solve()
{
    cin >> n;
    int xCount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            nArr[i][j] = arr[i][j];
            if (arr[i][j] == 'X')
            {
                xCount++;
            }
        }
    }
    int need = xCount - 8;

    permutation(0, 0, need);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "........" << endl;
    }
}
