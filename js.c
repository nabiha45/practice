#include <stdio.h>

int main()
{
    long long int i, j;
    long long int sum = 0;
    long long int n;

    scanf("%lld", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = n*(i-1)+ 1 ; j <= n*i; j++)
        {
            if (i % 2 != 0 && j % 2 != 0)
            {
                sum = sum + j;
            }

            else if (i % 2 == 0 && j % 2 == 0)
            {
                sum = sum+j;
            }
        }
    }

    printf("%lld", sum);
    return 0;
}
