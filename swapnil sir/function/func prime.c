#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        int d = prime(i);
        if(d ==1)
        {
            printf("%d ",i);
        }
    }
}
    int prime(int x)
    {
        int i;
        for (i = 2; i < x; i++)
        {
            if(x % i == 0) return 0;
        }
        return 1;
    }

