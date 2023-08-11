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

    else
    {
        printf("input is not an alphabet\n");
    }
}