#include <stdio.h>

int main()
{
    long long int t, z, n, p, i;

    p = 1;

    long long int c = 0;
    scanf("%ld", &t);

    while (t--)
    {
        scanf("%lld", &n);

        for (i = 1; i <= n ; i++)
        {
            p = p*i;
        }



       while (p % 10 == 0) //
       {
           c++;
           p = p / 10;
       }

       printf("%lld", c);
    }

    return 0;
}
