#include <stdio.h>

int main()
{
     int m, n;
    scanf("%d %d", &m, &n);
    int i, j;
    int a[m][n];
    int b[m][n];

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            sum+= a[i][j];
        }
        printf("%d\n", sum);
        sum = 0;
    }
}
