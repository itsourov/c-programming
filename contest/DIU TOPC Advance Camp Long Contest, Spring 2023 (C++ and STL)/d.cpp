#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int q;
    cin >> q;
    int qi, x;
    for (int i = 0; i < q; i++)
    {
        cin >> qi >> x;

        if (qi == 1)
        {
            s.insert(x);
        }
        else if (qi == 2)
        {
            s.erase(x);
        }
        else if (qi == 3)
        {
            if (s.find(x) == s.end())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
}