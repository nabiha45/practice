#include <stdio.h>

int main()
{
    int m, n, i, j;
    scanf("%d %d", &m, &n);

    int a[m][n];
     for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int b[n][m];
     for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
           printf("%d ", b[i][j]);
           if(j == m-1) printf("\n");
        }


    }
}
