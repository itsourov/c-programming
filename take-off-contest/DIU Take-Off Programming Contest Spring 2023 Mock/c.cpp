#include <bits/stdc++.h>
using namespace std;
long long int getDistance(long long x, long long y)
{
    return sqrt(x * x + y * y);
    
}
int main()
{
    long long n;
    cin >> n;
    long long  x, y, minx, miny;
    long long diff, minDiff;
    for (int i = 0; i < n; i++)
    {

        cin >> x >> y;
        diff = getDistance(x, y);
        if (i == 0 || diff <= minDiff)
        {
            minDiff = diff;
            minx = x;
            miny = y;
        }
    }
    cout << minx << " " << miny << endl;
}