#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {   sum += i;
        if(i == n)
        {
            printf("%d = %d", n, sum);
        }
        else
        {
            printf("%d + ", i);
        }

    }
}
