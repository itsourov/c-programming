#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n";

vector<vector<int>> ans;
int prime[] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0};
void rec(int numbers[], int freq[], vector<int> &vt, int n)
{
    if (vt.size() == n)
    {
        if (prime[vt[0] + vt.back()])
            ans.push_back(vt);
        return;
    }

    for (int i = 1; i < n; i++)
    {

        if (freq[i] == 0 && prime[vt.back() + numbers[i]])
        {
            vt.push_back(numbers[i]);
            freq[i] = 1;
            rec(numbers, freq, vt, n);
            vt.pop_back();
            freq[i] = 0;
        }
    }
}
void solve(int n)
{

    int numbers[n];
    int freq[n];
    for (int i = 0; i < n; i++)
    {
        numbers[i] = i + 1;
        freq[i] = 0;
    }

    vector<int> vt;
    vt.push_back(1);
    freq[0] = 1;
    rec(numbers, freq, vt, n);

    for (auto item : ans)
    {
        for (auto number : item)
        {
            cout << number << " ";
        }
        cout << endl;
    }
    cout << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int tc = 1;
    while (cin >> n)
    {
        cout << "Case " << tc << ":" << endl;
        solve(n);
        ans.clear();
        tc++;
    }
}