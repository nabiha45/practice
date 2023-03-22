#include <stdio.h>

int main()
{
    int x1, x2, x3, x4, x5, c, i;

    c = 0;

    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);

    for (i = 1; i <= 5; i++)
    {

        if (x1 == 0)
        {
            c++;
            printf("%d", c);


            break;
        }

        else if (x1 != 0)
        {
            c++;
        }

        if (x2 == 0)
        {
            c++;
            printf("%d", c);


            break;
        }

        else if (x2 != 0)
        {
            c++;
        }

         if (x3 == 0)
        {
            c++;
            printf("%d", c);

            break;
        }

        else if (x3 != 0)
        {
            c++;
        }

        if (x4 == 0)
        {
            c++;
            printf("%d", c);

            break;
        }

        else if (x4 != 0)
        {
            c++;
        }

        if (x5 == 0)

        {   c++;
            printf("%d", c);

            break;

        }

        else if (x5 != 0)
        {
            c++;
        }
    }

    return 0;
}
