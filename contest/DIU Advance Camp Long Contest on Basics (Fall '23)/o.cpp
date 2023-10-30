#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (1)
    {
        int n;
        cin >> n;
        if (n < 0)
            break;

        stack<int> t;
        while (n)
        {
            t.push(n % 3);
            n /= 3;
        }
        if (t.empty())
        {
            t.push(0);
        }
        while (!t.empty())
        {
            cout << t.top();
            t.pop();
        }
        cout << endl;
    }
}