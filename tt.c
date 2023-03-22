#include <stdio.h>

int main()
{
    int p, d;

    float x, t;

    scanf("%d %d", &p, &d);

    x = d / 100.0;
    t = 10*p - 10*p*x;

    printf("%0.1lf", t);

    return 0;


}
