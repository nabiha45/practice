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
        int j, first;
        first = a[0];

        for(j = 0; j < n-1; j++)
        {
            a[j] = a[j+1];
        }
        a[j] = first;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
