#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int forward = 0, backword = 0;

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int input;
    int temp;
    for (int i = 0; i < m; i++)
    {
        cin >> input;
        temp = 1;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == input)
                break;
            temp++;
        }

        forward += temp;
        backword += n - temp + 1;
    }

    cout << forward << " " << backword << endl;
}