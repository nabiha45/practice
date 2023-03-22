#include <stdio.h>

int main()
{
    long long int t, n, m, i, x, y;

    long long int sum;

    scanf("%lld", &t);

    while (t--)
    {
         x = 0;
         sum = 0;
        scanf("%lld", &n);
        long long int arr1[n];

        for (i = 0; i < n; i++)
        {
            scanf("%lld", &arr1[i]);
        }
        scanf("%lld", &m);
        while (m--)
        {
            scanf("%lld", &y);

            sum += y;
        }



            x = (sum % n);

        printf ("%lld\n", arr1[x]);


    }
    return 0;
}
