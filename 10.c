#include <stdio.h>

int main()
{
    int a;

    double x, i, t, m;

    scanf("%d %lf", &a, &x);

    i = x / 100.0;

    t = a + (a*i*5);

    m = t / (5*12);

    printf("Total amount = %lf\n", t);

    printf("Monthly = %lf", m);

    return 0;
}
