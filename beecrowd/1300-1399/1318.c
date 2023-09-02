#include <stdio.h>
int main()
{
    int numberOfPeopleInvited, numberOfTicket, fakeTicket, temp;
    while (1)
    {

        scanf("%d %d", &numberOfPeopleInvited, &numberOfTicket);
        if (numberOfPeopleInvited == 0 || numberOfTicket == 0)
        {
            break;
        }

        int ticketNumber[numberOfTicket];
        for (int i = 0; i < numberOfTicket; i++)
        {
            scanf("%d", &ticketNumber[i]);
        }
        for (int i = 0; i < numberOfTicket - 1; i++)
        {
            for (int j = 0; j < numberOfTicket - 1 - i; j++)
            {
                if (ticketNumber[j] > ticketNumber[j + 1])
                {
                    ticketNumber[j] = ticketNumber[j + 1] + ticketNumber[j];
                    ticketNumber[j + 1] = ticketNumber[j] - ticketNumber[j + 1];
                    ticketNumber[j] = ticketNumber[j] - ticketNumber[j + 1];
                }
            }
        }
        fakeTicket = 0;
        temp = 0;
        for (int i = 0; i < numberOfTicket - 1; i++)
        {

            if (ticketNumber[i] == ticketNumber[i + 1] && ticketNumber[i] != temp)
            {
                fakeTicket++;
                temp = ticketNumber[i];
            }
        }
        printf("%d\n", fakeTicket);
    }
}