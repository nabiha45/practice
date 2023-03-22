#include <stdio.h>

int main()
{
    long long int a, b, c, r1, r2, i, gcd, lcm, t, j;

    j = 1;

    scanf("%lld", &t);


        while (t--)
        {

        scanf("%lld %lld", &a, &b);
        r1 = a;
        r2 = b;

        while (r1 != 0) {
        c = r2 % r1;

        r2 = r1;

        r1 = c;
        }
         gcd = r2;


    lcm = (a*b)/ gcd;

    printf("%d %d\n", gcd, lcm);

    }




    return 0;
}
