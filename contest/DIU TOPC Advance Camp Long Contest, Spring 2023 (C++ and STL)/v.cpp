#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, a;
    vector<pair<int, int>> applesN;
    vector<pair<int, int>> applesP;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> a;
        if (x >= 0)
        {
            applesP.push_back({x, a});
        }
        else
        {
            applesN.push_back({x, a});
        }
    }

    sort(applesP.begin(), applesP.end());
    sort(applesN.begin(), applesN.end(), greater<pair<int, int>>());

    int szP = applesP.size();
    int szN = applesN.size();

    // cout << szP << "---" << szN << endl;
    long long int totalApple = 0;

    if (szP == szN || szP + 1 == szN || szP == szN + 1)
    {
        for (auto apple : applesN)
        {
            totalApple += apple.second;
        }
        for (auto apple : applesP)
        {
            totalApple += apple.second;
        }
    }
    else if (szP > szN)
    {
        // cout << "calculating this 1\n";
        for (int i = 0; i < szN; i++)
        {
            totalApple += applesN[i].second;
        }
        for (int i = 0; i <= szN; i++)
        {
            totalApple += applesP[i].second;
        }
    }
    else
    {
        // cout << "calculating this 2\n";
        for (int i = 0; i < szP; i++)
        {
            totalApple += applesP[i].second;
        }
        for (int i = 0; i <= szP; i++)
        {
            totalApple += applesN[i].second;
        }
    }

    cout << totalApple << endl;
}