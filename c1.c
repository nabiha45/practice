#include <stdio.h>

int main()
{
    int a, b, c, y;

    y = 0;

    scanf("%d %d", &a, &b);

    for (; a <= b; )
    {
        a = 3*a;
        b = 2*b;

        y++;

        if (a > b)
        {
          printf("%d", y);
        }
        else
        {
            continue;
        }
    }

    return 0;
}
