#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);
    if (x == n-1)
    {
        for(i = 0; i < n-1; i++)
    {
        printf("%d", a[i]);
    }
    }
    else
    {
    for(i = x-1; i < n-1; i++)
    {
        a[i] = a[i+1];
    }
    n--;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
