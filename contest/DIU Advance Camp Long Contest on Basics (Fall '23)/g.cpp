#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int testCase = 0; testCase < t; testCase++)
    {
        map<int, int> mp;
        int a, b;
        for (int i = 0; i < 3; i++)
        {
            cin >> a >> b;

            for (int i = a; i <= b; i++)
            {
                mp[i] = 1;
            }
        }

        int totalTime = 0;
        for (auto item : mp)
        {
            totalTime++;
        }
        cout << totalTime << endl;
    }
}