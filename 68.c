#include <stdio.h>

int main()
{
    int n;
    int ara[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}
