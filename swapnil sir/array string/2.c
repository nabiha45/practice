#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for(i = 0; i < n; i++)
    {
        printf("%d", b[i]);
    }

}
