#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 2; i <= n-1; i++)
    {
        if (n % i == 0)
        {
            sum++;

            break;
        }
    }

    if (sum == 0)
    {
        printf ("P");
    }

    else
    {
        printf("NOT P");
    }
}
