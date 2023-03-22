#include <stdio.h>

int main()
{
    long long int a, b1;
    double b;

    scanf("%lld %lf", &a, &b);

    b1 = b*100 + 0.4;

    printf("%lld", a*b1/100);

    return 0;
}
