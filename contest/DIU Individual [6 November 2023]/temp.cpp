#include <bits/stdc++.h>
#include <deque>
#define int long long
using namespace std;
signed main()
{
    int n;
    int a;
    cin >> n;
    deque<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int size = n;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += v.at(i);
    }
    cout << sum << endl;

cal:

    if (size == 0)
        goto finished;

    if (sum % 2 == 0)
    {
        cout << v.front() << " ";
        sum = sum - v.front();
        v.pop_front();
    }
    else
    {
        cout << v.back() << " ";
        sum = sum - v.back();
        v.pop_back();
        reverse(v.begin(), v.end());
    }

    size--;
    goto cal;
finished:

    cout << endl;

    return 0;
}