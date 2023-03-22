#include <stdio.h>

int main()
{
    int n,i,j;
    int ara[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (i = n-1; i >=0; i--)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}
