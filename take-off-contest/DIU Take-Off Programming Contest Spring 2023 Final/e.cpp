
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double ab, bc;
    cin >> ab >> bc;

    double ac = sqrt((ab * ab) + bc * bc);

    double r = ac / 2;
    double areaOfCircle = 3.1416 * r * r;

    double areaOfTriangle = 0.5 * ac * r;

    printf("%.6lf\n", areaOfCircle - areaOfTriangle);
}