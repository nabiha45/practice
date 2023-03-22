#include <stdio.h>

int main()
{
    int n, m, l, i, j;
    scanf("%d %d %l", &n, &m, &l);
    int a[n][m];
    int b[m][l];
    int c[n][l];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < l; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int k;
    for(i = 0; i < n; i++)
    {
        for (j =0; j < l; j++)
        {
            c[i][j] = 0;

            for(k = 0; k < m; k++)
            {
                c[i][j] += a[i][k] *b[k][j];
            }

        }

    }
    for(i = 0; i < n; i++)
    {
        for (j =0; j < l; j++)
        {

            printf("%d ", c[i][j]);
        }
        printf("\n");

        }

}

