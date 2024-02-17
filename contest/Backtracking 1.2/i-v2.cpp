#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
bool taken[10];
map<int, vector<pair<int, int>>> mp;
void permutation(vector<int> &vt)
{
    if (vt.size() == 10)
    {
        int numA = vt[0];
        for (int i = 1; i < 5; i++)
        {
            numA *= 10;
            numA += vt[i];
        }
        int numB = vt[5];
        for (int i = 6; i < 10; i++)
        {
            numB *= 10;
            numB += vt[i];
        }

        if (numA % numB == 0)
        {
            mp[numA / numB].push_back(make_pair(numA, numB));
        }

        return;
    }
    for (int i = 0; i < 10; i++)
    {
        if (taken[i] == false)
        {
            vt.push_back(i);
            taken[i] = true;
            permutation(vt);
            vt.pop_back();
            taken[i] = false;
        }
    }
}
void solve(int n)
{
    if (mp[n].empty())
    {
        printf("There are no solutions for %d.\n", n);
    }
    else
    {
        for (auto item : mp[n])
        {
            printf("%05d / %05d = %d\n", item.first, item.second, n);
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> vt;
    permutation(vt);
    int n;
    bool first = true;
    while (cin >> n)
    {
        if (!first && n != 0)
            printf("\n");
        if (n == 0)
            break;
        solve(n);

        first = false;
    }
}
