#include <stdio.h>

int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        int finkClever = 0, willyDumb = 0;
        int count = 1;
        while (1)
        {
            if (n < 1)
            {
                break;
            }
            willyDumb++;
            n--;

            if (n < count)
            {

                if (count <= willyDumb + n)
                {
                    finkClever += count;
                    willyDumb -= (count - n);
                    n = 0;
                }
                break;
            }
            else
            {
                finkClever += count;
                n -= count;
            }

            count++;
        }
        printf("%d %d\n", finkClever, willyDumb);
    }
}