#include<stdio.h>
int main()
{
    long long int A,b;
    double B;
    scanf("%lld %lf",&A, &B);

    b=100*B+0.5;

    printf("%lld",A*b/100);

    return 0;
}
