#include <stdio.h>
int main(void)
{

    int serial = 1;
    for (int i = 60; i >= 0; i -= 5)
    {

        printf("I=%d J=%d\n", serial, i);
        serial += 3;
    }
}