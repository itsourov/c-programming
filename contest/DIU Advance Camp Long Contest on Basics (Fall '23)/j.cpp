#include <bits/stdc++.h>
using namespace std;

vector<int> beautifulPermutation(int n)
{
    vector<int> pm;

    if (n == 1)
    {
        pm.push_back(1);
    }
    else if (n == 2 || n == 3)
    {
        // do nothing
    }
    else
    {
        for (int i = n - 1; i >= 1; i -= 2)
        {
            pm.push_back(i);
        }
        for (int i = n; i >= 1; i -= 2)
        {
            pm.push_back(i);
        }
    }

    return pm;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> pm = beautifulPermutation(n);

    if (pm.empty())
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (auto item : pm)
        {
            cout << item << " ";
        }
        cout << endl;
    }
}