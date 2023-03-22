#include <stdio.h>

int main()
{
    int n, row, col;

    scanf("%d", &n);

    int a = n;

    for (int i = 1; i < 2*n; i++)
    {
        a = n;
        row = i;

        if (i > n)
        {
            row = i-n;
        }

        for (int j = 1; j <= 2*n-1; j++)
        {
            col = j;

            if (row == 1)
            {
                printf("%d ", a);
            }

            else if (row <= n && row != 1)
            {

             if (j == 1 && j == n)
             {
                 printf("4 ");
             }


            }


        }

        printf("\n");
    }
    return 0;





}
