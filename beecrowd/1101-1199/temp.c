#include <stdio.h>

int ans = 1; // globle veriable

void calculate()
{

    ans += 100;
    // add 100 to ans
}

int main()
{
    calculate();
    calculate();

    // duibar function call korlam tahole duibar  100 jog hobe;

    printf("%d\n", ans);
}