#include <stdio.h>

int main()
{
    int x = 10, y;

    int *p, *q;

    p = &x;
    q = &y;

    y = *p;
    *p = 15;
    *q = 20;

    printf("%d %d %d %d", x, y, *p, *q);
}
