#include <stdio.h>
int main()
{
    long long int expIncrease, expOfMonster;
    while (1)
    {
        scanf("%lld %lld", &expIncrease, &expOfMonster);
        if (expIncrease == 0 && expOfMonster == 0)
        {
            break;
        }
        printf("%lld\n", expIncrease * expOfMonster);
    }
}