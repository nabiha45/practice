#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846264

int main()
{
    double a1, a, r;


    scanf("%lf %lf", &a1, &r);

    double p1, p2, p;

    a = a1/2.00;
    if (a >= r)
    {
        printf("%0.3lf\n", pi*r*r);
    }
    else if (r >= sqrt(2)*a)
    {
        printf("%0.3lf\n", a1*a1);
    }
    else
    {
        p1 = r*r*acos(a/r);
        p2 = a* sqrt(r*r - a*a);
        printf("%0.3lf\n", pi*r*r - (4*(p1-p2)));
    }
    return 0;
}
