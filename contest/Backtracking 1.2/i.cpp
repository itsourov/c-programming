#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

bool isValid(vector<int> &a, vector<int> &b, int num)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == num)
        {
            return false;
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == num)
        {
            return false;
        }
    }
    return true;
}
bool foundAns = false;
void rec(vector<int> &a, vector<int> &b, int n)
{
    if (a.size() == 5 && b.size() == 5)
    {

        int numA = 0;
        for (int i = 0; i < 5; i++)
        {
            if (i != 0)
            {
                numA *= 10;
            }
            numA += a[i];
        }

        int numB = 0;
        for (int i = 0; i < 5; i++)
        {
            if (i != 0)
            {
                numB *= 10;
            }
            numB += b[i];
        }
        if (((numA * 1.0) / numB) == n)
        {

            printf("%05d / %05d = %d\n", numA, numB, n);

            foundAns = true;
        }
        return;
    }
    if (a.size() < 5)
    {
        for (int i = 0; i <= 9; i++)
        {
            if (isValid(a, b, i))
            {
                a.push_back(i);
                rec(a, b, n);
                a.pop_back();
            }
        }
    }
    else if (b.size() < 5)
    {
        for (int i = 0; i <= 9; i++)
        {
            if (isValid(a, b, i))
            {
                b.push_back(i);
                rec(a, b, n);
                b.pop_back();
            }
        }
    }
}
void solve(int n)
{
    vector<int> a, b;
    rec(a, b, n);
    if (!foundAns)
    {
        printf("There are no solutions for %d.\n", n);
    }
    foundAns = false;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        solve(n);
        printf("\n");
    }
}
