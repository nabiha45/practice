#include <stdio.h>

int main()
{
    int t, x, y, a, b, i;

    scanf("%d", &t);

    while (t--)

    { scanf("%d %d", &x, &y);

    a = x*2;
    b = y*5;

    if (a > b)
    {
        printf("Chocolate\n");
    }

    if (b > a)
    {
        printf("Candy\n");

    }

    if (a == b)
    {
        printf("Either\n");

    }

}

    return 0;

}
