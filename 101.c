#include <stdio.h>

int main()
{
    long long int n, i, c, d;
    d = 0;

    scanf("%lld", &n);

    long long int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++) // 3 2 2 4
        {
            if (arr[j] % arr[i] == 0)
            {
                c = arr[i];
                d = 1;
            }
            else
            {
                break;
            }
        }
    }

    if ( d == 1)
    {
        printf("%lld", c);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
