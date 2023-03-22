#include <stdio.h>

int main()
{
    int a, b, t, c, n, d;



    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);

        d = 0;

        while (n--)

        {

        scanf("%d", &a);

        if (a >= 10 && a <= 60)
        {
            d++;
        }


    }
    printf("%d\n", d);
    }

    return 0;
}

