#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, q;
        cin >> n >> a >> q;
        char input;
        int maxOnlineAtATime = a;
        int currentOnline = a;
        int totalOnline = a;
        for (int i = 0; i < q; i++)
        {
            cin >> input;
            if (input == '+')
            {
                currentOnline++;
                totalOnline++;
            }
            else
            {
                currentOnline--;
            }
            if (currentOnline > maxOnlineAtATime)
            {
                maxOnlineAtATime = currentOnline;
            }
        }
        if (maxOnlineAtATime >= n)
        {
            cout << "YES" << endl;
        }
        else if (totalOnline >= n)
        {
            cout << "MAYBE" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
