#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int input;
    int oddCount = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> input;
        if (input % 2 == 1)
            oddCount++;
    }

    if (oddCount >= 1 && oddCount <= 2)
    {
        cout << "3 Kimonos for Nezuko" << endl;
    }
    else
    {
        cout << "You have to choose two" << endl;
    }
}