#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int input;
    long long int sum = 0;
    vector<int> oddNumbers;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input % 2 == 0)
        {

            sum += input;
        }
        else
        {
            oddNumbers.push_back(input);
        }
    }
    sort(oddNumbers.begin(), oddNumbers.end(), greater<int>());
    int len = oddNumbers.size();
    if (oddNumbers.size() % 2 != 0)
    {
        len--;
    }
    for (int i = 0; i < len; i++)
    {
        sum += oddNumbers[i];
    }

    cout << sum << endl;
}