#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, c;
    cin >> a >> c;

    vector<int> A, B;

    while (a > 0)
    {
        A.push_back(a % 3);
        a /= 3;
    }
    while (c > 0)
    {
        B.push_back(c % 3);
        c /= 3;
    }
    int sizea = A.size();
    int sizeb = B.size();
    while (sizea != sizeb)
    {
        if (sizea < sizeb)
        {
            A.push_back(0);
            sizea++;
        }
        else
        {
            B.push_back(0);
            sizeb++;
        }
    }

    vector<int> final;

    for (int i = 0; i < sizea; i++)
    {
        final.push_back((A[i] + B[i]) % 3);
    }
    int total = 0, index = 0;

    for (auto item : final)
    {
        total += item * pow(3, index);
        index++;
    }

    cout << total << endl;
}