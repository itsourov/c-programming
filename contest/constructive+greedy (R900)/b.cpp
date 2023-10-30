#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string input;
        cin >> input;

        string temp = input;

        reverse(temp.begin(), temp.end());
        if (temp != input)
        {
            cout << input << endl;
        }
        else
        {
            map<char, int> fq;
            for (auto c : input)
            {
                fq[c]++;
            }
            if (fq.size() == 1)
            {
                cout << -1 << endl;
            }
            else
            {
                sort(input.begin(), input.end());
                cout << input << endl;
            }
        }
    }
}