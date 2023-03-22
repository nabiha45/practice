#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    int x;
    int f[1001] = {0};
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        f[x]++;
    }
    for(i = 0; i < 101; i++)
    {
        for(j = 0; j < f[i]; j++)
        {
            printf("%d ", i);
        }
    }
}
