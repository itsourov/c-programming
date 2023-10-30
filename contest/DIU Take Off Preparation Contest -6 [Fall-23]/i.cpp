#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int oddCount = 0, evenCount = 0;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // evenCount = 1;

    // int temp = oddCount / 2;

    // got it.

    if (oddCount % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}