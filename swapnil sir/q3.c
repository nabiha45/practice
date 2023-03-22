#include <stdio.h>

int main()
{
    int i, n, j;
    int m;

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        m = 1;
        for(j = 1; j <= 2*i-1; j++)
        {
            if(j <= i)
            {
                printf("%d", m);
                m++;
            }
            else
            {
                printf("%d", m-2);
                m--;
            }
        }
        printf("\n");
    }
}
