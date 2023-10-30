#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> rats, womensAndChilds, mans, captains;
    string input1, input2;
    for (int i = 0; i < n; i++)
    {
        cin >> input1 >> input2;
        if (input2 == "rat")
        {
            rats.push_back(input1);
        }
        else if (input2 == "woman" || input2 == "child")
        {
            womensAndChilds.push_back(input1);
        }
        else if (input2 == "man")
        {
            mans.push_back(input1);
        }
        else
        {
            captains.push_back(input1);
        }
    }

    for (auto rat : rats)
    {
        cout << rat << "\n";
    }
    for (auto womensAndChild : womensAndChilds)
    {

        cout << womensAndChild << "\n";
    }
    for (auto man : mans)
    {

        cout << man << "\n";
    }
    for (auto captain : captains)
    {
        cout << captain << "\n";
    }
}