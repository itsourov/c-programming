#include <stdio.h>

int main(void)
{

    int employeeNumber, workedHour;
    float perHourRate;
    scanf("%d %d %f", &employeeNumber, &workedHour, &perHourRate);

    printf("NUMBER = %d\n", employeeNumber);
    printf("SALARY = U$ %.2f\n", perHourRate * workedHour);

    return 0;
}