#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n >= 0)
    {
        int i;
        int c = 10;
        for(i = n; i <= n+10; i++)
        {
            if(i%2 == 1)
            {
            printf("%d ", i);
            }
            else
            {
                printf("%d", i+1);
            }
        }
    }
    if (n < 0)
    {
        int k = 5;
        int i;
        for(i = n; i < n+5; i++)
        {
            if(i % 2 == 0)
            {
                printf("%d ", i-1);
            }
            else
            {
                printf("%d ", i-2);
            }
        }
    }
}
