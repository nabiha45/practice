#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int i;
    for(i = 0;i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    a[n] = x;
    for(i = 0; i <= n; i++)
    {
        printf("%d", a[i]);
    }

}
