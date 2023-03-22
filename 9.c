#include <stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2, x, y, d;

    scanf("%lf %lf %lf %lf %lf %lf", &a1, &a2, &b1, &b2, &c1, &c2);

    d = a1 * b2 - a2 * b1;

    x = (b2 * c1 - b1 * c2) / d;

    y = (a1*c2 - a2*c1) / d;

    if ((int)d == 0)
    {
        printf("no");
    }

    else
    {

    printf("x = %0.2lf and y = %0.2lf", x, y);

    }

    return 0;
}
