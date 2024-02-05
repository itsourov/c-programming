#include <bits/stdc++.h>
#include <deque>
#define int long long
using namespace std;

vector<int> vt;
int a[] = {2, 3, 4, 5, 9};
void subset(int i)
{
    if (i == 5)
    {
        for (auto item : vt)
        {
            cout << item << " ";
        }
        cout << endl;
        return;
    }

    subset(i + 1);
    vt.push_back(a[i]);
    subset(i + 1);
    vt.pop_back();
}
signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    subset(0);
}