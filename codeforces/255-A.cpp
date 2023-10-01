#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> arr(3);
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr[i % 3] += input;
    }

    int mostDone = max_element(arr.begin(), arr.end()) - arr.begin();

    char ex[3][100] = {"chest", "biceps", "back"};

    cout << ex[mostDone] << endl;
}