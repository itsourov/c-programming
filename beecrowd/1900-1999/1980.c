#include <stdio.h>
#include <string.h>

long long int getFactorial(long long int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return n * getFactorial(n - 1);
    }
}

int main()
{

    char input[20];
    while (scanf("%s", input) && input[0] != '0')
    {
        long long int len = strlen(input);
        printf("%lld\n", getFactorial(len));
    }
}