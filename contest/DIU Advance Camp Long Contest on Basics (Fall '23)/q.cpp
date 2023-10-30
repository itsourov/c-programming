#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int temp = n / 2;
    cout << temp << endl;

    if (n % 2 == 0)
    {
        for (int i = 0; i < temp; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = 1; i < temp; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << " ";
        cout << endl;
    }
}
