#include <stdio.h>

int main()
{
   long long int n, m, l, i, j;

    scanf("%lld %lld %lld", &n, &m, &l);
    long long int A[n][m];
    long long int B[m][l];

    long long int R[n][l];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%lld", &A[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < l; j++)
        {
            scanf("%lld", &B[i][j]);
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
                printf("%lld", R[i][j]);
            }
            else
            {
            printf("%lld ", R[i][j]);
            }
        }
        printf("\n");
    }


    return 0;




}
