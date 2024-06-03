#include <bits/stdc++.h>
using namespace std;

void generate_random_array(int x)
{
    int n = 1 + (x % 32); // Ensure n is between 1 and 32
    cout << n << endl;

    vector<int> a(n, 0);

    // Populate the array a with random -1, 0, 1 ensuring constraints
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || a[i - 1] == 0)
        {
            a[i] = (rand() % 3) - 1; // Randomly -1, 0, or 1
        }
        else
        {
            a[i] = 0; // Ensure no consecutive non-zeros
        }
    }

    // Output the array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    srand(time(0)); // Seed the random number generator

    while (t--)
    {
        int x;
        cin >> x;
        generate_random_array(x);
    }

    return 0;
}
