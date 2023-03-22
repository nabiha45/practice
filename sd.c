#include <stdio.h>

int main()
{
    int t, a, b, c, x, y;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a > b && a > c)

        {
            x = a;

            if (b > c)
            {
                y = c;
            }

            else
            {
                y = b;
            }


        }

        else if (b > a && b > c)
        {
            x = b;

            if (a > c)
            {
                y = c;
            }

            else
            {
                y = a;
            }

        }

        else if (c > a && c > b)
        {
            x = c;
            if (b > a)
            {
                y = a;
            }
            else
            {
                y = b;
            }


        }

        printf("%d\n", x-y);

    }

    return 0;
}
