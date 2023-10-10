#include <bits/stdc++.h>
using namespace std;

int getPos(vector<int> v, int num)
{
    int pos = 1;
    for (auto u : v)
    {
        if (u == num)
            break;
        pos++;
    }
    return pos;
}
int getMinDiff(int pointa, int pointb, int n)
{
    int diff1 = abs(pointa - pointb);

    if (pointa > pointb)
        swap(pointa, pointb);
    int diff2 = pointa + n - pointb;

    if (diff1 < diff2)
        return diff1;
    else
        return diff2;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cost = 0;
    int pos;
    for (int i = 1; i <= n; i++)
    {
        pos = getPos(arr, i);
        swap(arr[pos - 1], arr[i - 1]);

        cost += getMinDiff(pos, i, n);
    }

    cout << cost << endl;
}