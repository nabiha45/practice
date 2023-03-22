#include <stdio.h>

int main()
{
    long long int n;
    long long int a;
    long long int i;

    long double sum = 0;

    scanf("%lld", &n);


    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &a);
        sum = sum + a;
    }





    printf("%Lf", sum/n);
    return 0;
}
