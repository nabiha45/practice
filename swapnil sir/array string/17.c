#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n+1];
    int i;
    for(i = 1;i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = -999;
    for(i = 1; i <= n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    int f[max+1];
    for(i = 1; i <= max; i++)
    {
        f[i] = 0;
    }
    for(i = 1; i <= n; i++)
    {
        f[a[i]]+= 1;
    }

    for(i = 1; i <= max; i++)
    {
        if(f[i] % 2 == 1)
        {
            printf("%d ", i);
        }
    }

}
