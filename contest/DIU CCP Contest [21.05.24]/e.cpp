#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
priority_queue<int, vector<int>, greater<int>> leftQ;
priority_queue<int> rightQ;
int leftSum = 0;
int rightSum = 0;
void addToLeft(int x)
{
    leftSum += x;
    leftQ.push(x);
}
void addToRight(int x)
{
    rightSum += x;
    rightQ.push(x);
}
void removeTopLeft()
{
    leftSum -= leftQ.top();
    leftQ.pop();
}
void removeTopRight()
{
    rightSum -= rightQ.top();
    rightQ.pop();
}
void solve()
{

    int n, q;
    cin >> n >> q;
    int arr[n + 10];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    addToLeft(arr[1]);
    int ans[n + 10];
    ans[1] = arr[1];
    for (int i = 3; i <= n; i += 2)
    {
        // int temparr[3];
        // temparr[0] = leftQ.top();
        // temparr[1] = arr[i - 1];
        // temparr[2] = arr[i];
        // sort(temparr, temparr + 3);

        // removeTopLeft();

        // addToRight(temparr[0]);
        // addToLeft(temparr[1]);
        // addToLeft(temparr[2]);
        addToLeft(max(arr[i - 1], arr[i]));
        addToRight(min(arr[i - 1], arr[i]));

        int l = leftQ.top();
        int r = rightQ.top();
        while (l < r)
        {

            removeTopLeft();
            removeTopRight();

            addToLeft(max(l, r));
            addToRight(min(l, r));

            l = leftQ.top();
            r = rightQ.top();
        }
        ans[i] = leftSum - rightSum;
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        cout << ans[x] << " ";
    }
    cout << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        leftSum = 0;
        rightSum = 0;
        leftQ.leftQ = priority_queue<int, vector<int>, greater<int>>();
        rightQ = priority_queue<int>();
    }
    return 0;
}