#include <stdio.h>

#include <math.h>



double fact(double x, double mul);

int main()
{
    double pi = 3.14159265;
    double  e = 2.718281827;
    int n;
    scanf("%d", &n);
    double mul;

    mul = sqrt((2*n+1/3)*pi);
    double c = pow(n/e, n);

    double ans = fact(c, mul);
    printf("%0.5lf", ans);
}

double fact (double x, double mul)
{
    double r = x*mul;
    return r;
}
