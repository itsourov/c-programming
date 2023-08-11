#include <stdio.h>
int main(void)
{
    char input;
    printf("Enter charecter to know its type: ");
    scanf("%c", &input);

    if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'Z'))
    {
        printf("input is an alphabet\n");
    }
    else if ((input >= '0' && input <= '9'))
    {

        printf("input is a digit\n");
    }
    else
    {
        printf("input is a special character\n");
    }
}