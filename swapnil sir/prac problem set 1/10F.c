#include <stdio.h>

int main()
{
    int p,q, i, sum = 0;
    scanf("%d %d", &p, &q);
    for(i = p; i <= q; i++)
    {
        sum += i;
        if (i == q)
        {
            printf("%d = %d", i, sum);
        }
        else
        {
            printf("%d + ", i);
        }
    }
}
