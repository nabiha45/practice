#include <stdio.h>

int main()
{
    int t, x1, x2, y1, y2, x, y;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        x= x1 - x2;

        y = y1 - y2;

        if (x < 0)
        {
            x = -x;
        }
        if (y < 0)
        {
            y = -y;
        }

        if (x > y)
        {
            printf("%d\n", x);
        }

        else
        {
            printf("%d\n", y);
        }
    }

    return 0;
}
