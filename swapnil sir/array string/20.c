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
   for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int c[m][n];

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
     for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
           printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}
