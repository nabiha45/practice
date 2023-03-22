#include <stdio.h>

int main()
{
    int n, row, col, count;




    scanf("%d", &n);

    for (int i = 1; i <= 2*n; i++)
    {
        count = 0;
        row = i;

        if (i > n)
        {
            row = n - (i-n);
        }



        for (int j = 1; j <= n+row-1; j++)
        {
            col = j;


            if (col < n-row+1)
            {
                printf("  ");
            }

            else
            {
                if (col == n || col <= n)
                {
                printf("%d ", count);
                count++;
                }

                else
                {
                    count = 1;
                    printf("%d ", count);
                    count--;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
