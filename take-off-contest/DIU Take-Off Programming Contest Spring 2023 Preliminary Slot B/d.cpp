#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int input, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        sum += input % 10;
    }
    if (sum % x == 0)
        cout << "Finish all the tasks, including mine!" << endl;
    else
        cout << "You can now watch the series!" << endl;
}