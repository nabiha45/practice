#include <stdio.h>

int main()
{
    int m, n, sum = 1;
    scanf("%d %d", &m, &n);
    int i;
    for(i = 1; i <= n; i++)
    {
        sum*= m;
    }
    printf("%d", sum);
}
