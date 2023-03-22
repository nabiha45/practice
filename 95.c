#include <stdio.h>

int main()
{
    int n, m, l, i, j;

    scanf("%d %d %d", &n, &m, &l);
    int A[n][m];
    int B[m][l];

    int R[n][l];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < l; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < l; j++)
        {
            R[i][j] = 0;

            for (int k = 0 ; k < m; k++)
            {
                R[i][j] += A[i][k] * B[k][j];
            }

            if (j == l-1)
            {
                printf("%d", R[i][j]);
            }
            else
            {
            printf("%d ", R[i][j]);
            }
        }
        printf("\n");
    }


    return 0;




}
