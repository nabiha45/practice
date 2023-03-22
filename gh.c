#include <stdio.h>

    int main()
{
    long long int i, k, t;

    long long int a, b;
    long long int sum = 0;

    scanf("%lld", &k);

    for(i = 1; i <= k; i++) // i = 1
    {
        sum = sum + i;
    }



    if (sum % 2 == 0)
    {
        printf("%lld/1", sum/2);
    }

    else
    {
         printf("%lld/2", sum);
    }




    return 0;
}
