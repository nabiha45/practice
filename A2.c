#include <stdio.h>

int main()
{
    int a, b, c, p, q, r;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c)
    {
        p = a;
    }

    else if (b < a && b < c)
    {
        p = b;
    }

    else
    {
        p = c;
    }


    if ((a < b || a < c) && a > p)
    {
        q = a;

    }

    else if ((b < a || b < c) && b > p)
    {
        q = b;

    }

     else
    {
        q = c;
    }

    if (a > p && a > q )
    {
        r = a;
    }

    else if (b > p && b > q)
    {
        r = b;
    }

    else
    {
        r = c;
    }

    printf("%d %d %d\n", p, q, r);






    return 0;
}
