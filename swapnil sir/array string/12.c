#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i, a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    for(i = 0; i < x; i++)
    {
        int j, last;
        last = a[n-1];
        for(j = n-1; j > 0; j--)
        {
            a[j] = a[j-1];
        }
        a[0] = last;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
