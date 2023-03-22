#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int a[n];
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);
    int p;
    scanf("%d", &p);

    for(i = 1; i <= n; i++)
    {
        if(i > x)
        {
            a[i] = a[i-1];
        }
        else
        {
            if(i == x)
            {a[i] = p;
            }
            else
            {a[i] = a[i];
            }
        }
    }
    for(i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}

