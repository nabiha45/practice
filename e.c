#include <stdio.h>

int main()
{
    int a, x, b;

    x = 0;

    scanf("%d", &a);

    if ( a == 0)
    {
        printf("yes");
    }

    for(b = 0; x % a != 0; )
    {
        if (a >= 1)
        {
            x = x + 1;
        }

        if (x == 1 || a > x)
        {
            x = x + 2;
        }

        if (x == 3 && a > x)
        {
            x = x + 3;

        }


    }

    if (x % a == 0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }

        return 0;
}
