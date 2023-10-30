#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int erasePosition;
    cin >> erasePosition;
    v.erase(v.begin() + erasePosition - 1);

    int eraseRangeStart, eraseRangeEnd;
    cin >> eraseRangeStart >> eraseRangeEnd;
    v.erase(v.begin() + eraseRangeStart - 1, v.begin() + eraseRangeEnd - 1);

    cout << v.size() << endl;

    for (auto value : v)
    {
        cout << value << " ";
    }
    cout << endl;
}