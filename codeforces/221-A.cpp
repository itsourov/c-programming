#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int permutation[n];
    for (int i = 0; i < n; i++)
    {
        permutation[i] = i + 1;
        if (i > 0)
            swap(permutation[i], permutation[i - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << permutation[i] << " ";
    }
    cout << endl;
}