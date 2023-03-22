#include <stdio.h>

int main()
{
    int n, row, col;

    int m;

    scanf("%d", &n);

    for (int i = 0; i <=2*n; i++)
    {
        row = i;

        if (i >= n+1)
        {
            row = n - (i - n);
        }
        int m = 0;
        for (int j = 0; j <= n+row; j++)

        {
            col = j;

            if (col < n-row)
            {
                printf("  ");
            }
            else if (col <= n && row != 0)
            {
                printf("%d ", m);
            m++;
            }

            else if (col <= n && row == 0)
            {
                printf("%d", m);
                m++;
            }

            else if (col > n)
            {
                if (col == n + 1)
                {
                    m--;
                }
                m--;
                if (col == n + row)
                {
                    printf("%d", m);
                }
                else
                {
                    printf("%d ", m);
                }
            }
        }
        printf("\n");
    }
    return 0;

}
