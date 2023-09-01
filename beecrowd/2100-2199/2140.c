#include <stdio.h>
int main()
{
    int price, paid, diff, numberOfBill, ispossible, bill[6] = {2, 5, 10, 20, 50, 100};
    while (1)
    {
        numberOfBill = 0, ispossible = 1;
        scanf("%d %d", &price, &paid);
        if (price == 0 && paid == 0)
        {
            break;
        }
        diff = paid - price;

        for (int i = 5; i >= 0; i--)
        {
            if ((int)(diff / bill[i]) > 1)
            {
                ispossible = 0;
                break;
            }
            numberOfBill += diff / bill[i];
            diff = diff % bill[i];
        }

        if (diff == 0 && numberOfBill == 2 && ispossible)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
    }
}