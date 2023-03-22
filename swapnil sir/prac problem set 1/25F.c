#include <stdio.h>

int main()
{
    int x = 1;
    while(1)
    {
     int d, a, b;
    scanf("%d", &d);
    if (d > 1)
    {
        break;

    }
    else
    {
        scanf("%d %d", &a, &b);

    if (d == 1)
    {
        printf("Case %d\n", x);
        printf("Sum: %d\n", a+b);
        x++;

    }
    else if (d == 0)
    {
        printf("Case %d\n", x);
        printf("Sub: %d\n", a-b);
        x++;
    }
    }
    }
    return 0;
}
