#include <stdio.h>

int sum(int ara[], int n, int i)
{
    if (i == n) return;
    return ara[i] + sum(ara, n, i+1);

}
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int res = sum(ara, n, 0);
    printf("%d", res);

}
