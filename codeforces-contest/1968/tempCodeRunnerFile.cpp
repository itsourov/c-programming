#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int perm[N];
int arr[N];
int visited[N];
int go(int index, int k)
{
    // cout << index << " ";
    if (k == 0)
        return 0;
    if (visited[index])
    {
        return 0;
    }
    visited[index] = 1;
    int ekhaneThakle = arr[index] * k;
    int coleGele = arr[index] + go(perm[index], k - 1);
    return max(ekhaneThakle, coleGele);
}
void solve()
{
    int n, k, pa, pb;

    cin >> n >> k >> pa >> pb;
    pa--;
    pb--;
    for (int i = 0; i < n; i++)
    {
        cin >> perm[i];
        perm[i]--;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        visited[i] = 0;
    }

    int scoreA = go(pa, k);
    for (int i = 0; i < N; i++)
    {
        visited[i] = 0;
    }
    // cout << endl;
    int scoreB = go(pb, k);
    // cout << endl;
    // cout << scoreA << " " << scoreB << endl;
    if (scoreA == scoreB)
    {
        cout << "Draw" << endl;
    }
    else if (scoreA > scoreB)
    {
        cout << "Bodya" << endl;
    }
    else
    {
        cout << "Sasha" << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}