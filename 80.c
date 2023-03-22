#include <stdio.h>

int main()
{
    int n, t, x, s, cup, y;

    int i, j;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d %d", &n, &cup, &s);

        while (s--)
        {
            scanf("%d %d", &x, &y);

            if (x == cup)
            {
                cup = y;
            }

            else if (y == cup)
            {
                cup = x;
            }

        }

        printf("%d\n", cup);


    }
    return 0;
}
