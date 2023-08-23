#include <stdio.h>

int main(void)
{
    double salary;
    scanf("%lf", &salary);

    if (salary <= 2000)
    {
        printf("Isento\n");
    }
    else
    {
        double tax = 0;

        if (salary > 4500)
        {
            tax += (salary - 4500) * 28 / 100;
            salary -= (salary - 4500);
        }

        if (salary > 3000)
        {

            tax += (salary - 3000) * 18 / 100;
            salary -= (salary - 3000);
        }
        if (salary > 2000)
        {
            tax += (salary - 2000) * 8 / 100;
            salary -= (salary - 2000);
        }

        printf("R$ %.2lf\n", tax);
    }

    return 0;
}