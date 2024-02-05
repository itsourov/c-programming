#include <bits/stdc++.h>
#include <deque>
#define int long long
using namespace std;

vector<int> ans;
int maxSum = 0;
vector<int> temp;
void subset(vector<int> arr, int i, int sum, const int m)
{
    if (i == arr.size())
    {
        if (sum <= m && sum >= maxSum)
        {
            ans = temp;
            maxSum = sum;
        }
        return;
    }

    subset(arr, i + 1, sum, m);
    temp.push_back(arr[i]);
    subset(arr, i + 1, sum + arr[i], m);
    temp.pop_back();
}

signed main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n)
    {

        int tracks;
        cin >> tracks;
        vector<int> arr(tracks);
        for (int i = 0; i < tracks; i++)
        {
            cin >> arr[i];
        }

        subset(arr, 0, 0, n);

        for (auto item : ans)
        {
            cout << item << " ";
        }

        cout << "sum:" << maxSum << endl;
        maxSum = 0;
        temp.clear();
        ans.clear();
    }
}