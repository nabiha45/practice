#include <stdio.h>

int main()
{
    int a, b, c, sum, x, y;

    scanf("%d %d %d", &a, &b, &c);

    if((a > b && a > c) && (b > c))
    {
        x = a;
        y = b;

        sum = x + y;

        printf("%d", sum);
    }

    else if ((b > a && b > c) && (c > a))
    {
        x = b;
        y = c;

        sum = x + y;
        printf("%d", sum);

    }

    else if ((c > a && c > b) && (a > b))

    {
        x = c;
        y = a;

        sum = x + y;

        printf("%d", sum);
    }

    return 0;
}
