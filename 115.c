#include <stdio.h>

int main()
{
    int i, j, isprime;

    int n, c;
    c = 0;
    scanf("%d", &n);
    int arr[n+1];
    int b[n+1];
    for (i= 1; i <= n; i++)
    {
       scanf("%d", &b[i]);
    }

    for (i = 1; i <= n; i++)
    {
        isprime = 1;
        for (j = 2; j < n-1; j++)
        {
            if (b[i] == 2)
            {
                break;
            }
            if (b[i] % j == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime == 1)
        {
            c++;
           arr[i] = b[i];
        }
        else
        {
            arr[i] = 0;
        }

    }
     printf("%d\n", c);
    for (i = 1; i <= n; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
