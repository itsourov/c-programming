#include <bits/stdc++.h>
using namespace std;

int main()
{
    double m[5];
    double w[5];
    double hack[2];
    double point[5] = {500, 1000, 1500, 2000, 2500};
    for (int i = 0; i < 5; i++)
    {
        cin >> m[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> w[i];
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> hack[i];
    }

    double score = 0;
    double temp1, temp2;
    for (int i = 0; i < 5; i++)
    {

        temp1 = 0.3 * point[i];
        temp2 = (1 - (m[i] / 250)) * point[i] - 50 * w[i];
        score += max(temp1, temp2);
    }
    score += hack[0] * 100;
    score -= hack[1] * 50;

    cout << (int)ceil(score) << endl;
}