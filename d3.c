#include <stdio.h>

int main()
{
    long long int A, a, b, c, d;

    scanf("%d", &A);

    if (A > 999999)
    {
        a = A / 1000;
        b = A % 1000;

        c = a / 1000;
        d = a % 1000;

        if (b == 0 && d == 0)
        {
            printf("%lld,000,000", c);
        }

        else if (b == 0 && d != 0)
        {
            printf("%lld,%lld,000", c, d);
        }

        else if (b !=0 && d == 0)
        {
            printf("%lld,000,%lld", c, b);
        }

        else {

        printf("%lld,%lld,%lld", c, d, b);
        }




            }

        else if (A > 999)
        {
            a = A / 1000;
            b = A % 1000;

            if (b == 0)
            {
                printf("%lld,000", a);
            }

            else
            {

            printf("%lld,%lld", a, b);
            }
        }

        else
        {
            printf("%lld", A);
        }

            return 0;
}
