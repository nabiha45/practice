#include <stdio.h>

int main()
{
    int n, m, i, j;

    scanf("%d %d", &n, &m);

    long long int A[n][m];

    long long int B[m][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
          scanf("%lld", &A[i][j]);
        }

    }


        for (j = 0, i = n-1; j < n, i >= 0; j++, i--) // j = 0
        {
            for (int k = 0; k < m; k++) // k = 0
            {
                B[k][j] = A[i][k];
            }
        }

        printf ("%d %d\n", m, n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == n-1)
            {
                printf("%lld", B[i][j]);
            }
            else
            {
            printf("%lld ", B[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

