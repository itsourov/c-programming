
#include <iostream>
#include <queue>
using namespace std;
#define int long long
const int limit = 100000 * 3;
void solve()
{
    int distance[100000 * 3];
    for (int i = 0; i < (100000 * 3); i++)
    {
        distance[i] = 1e9;
    }

    int n, k;
    cin >> n >> k;

    queue<int> q;
    q.push(n);
    distance[n] = 0;

    while (q.size())
    {
        int node = q.front();
        q.pop();

        int nextMove = node - 1;
        if (nextMove >= 0 && nextMove < limit && distance[node] + 1 < distance[nextMove])
        {
            distance[nextMove] = distance[node] + 1;
            q.push(nextMove);
        }

        nextMove = node + 1;
        if (nextMove >= 0 && nextMove < limit && distance[node] + 1 < distance[nextMove])
        {
            distance[nextMove] = distance[node] + 1;
            q.push(nextMove);
        }

        nextMove = node * 2;
        if (nextMove >= 0 && nextMove < limit && distance[node] + 1 < distance[nextMove])
        {
            distance[nextMove] = distance[node] + 1;
            q.push(nextMove);
        }
    }
    // for (int i = 0; i < n * 2; i++)
    // {
    //     cout << distance[i] << " ";
    // }

    cout << distance[k] << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}