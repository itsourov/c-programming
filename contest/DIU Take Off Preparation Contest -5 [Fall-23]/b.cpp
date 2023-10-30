#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "The Universe of our Hero" << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "The Universe of Spider-Man 1" << endl;
    }
    else
    {
        cout << "The Universe of Spider-Man 2" << endl;
    }
}