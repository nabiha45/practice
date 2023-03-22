#include <stdio.h>

int main()
{
    int i, n, sum;

    scanf("%d", &n);

    sum = 0;

    for(i = 1; i <= n; i++) // i = 1
    {
        sum = sum + i; // sum = 1

        printf("%d", i);

        if ( i < n)
        {
            printf("+");
        }

        else
        {
            printf("=%d", sum);
        }
    }

    return 0;
}
