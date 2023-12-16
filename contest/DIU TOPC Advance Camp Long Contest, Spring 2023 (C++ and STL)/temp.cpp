#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 59;
    int i = 4;
    int b = a & (~(a << (i + 1) - 1));
}