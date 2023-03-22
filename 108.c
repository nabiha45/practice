#include <stdio.h>

int main()
{
    int n, m,c;

    scanf("%d %d", &n, &m);

    int i, j;
    c = 0;

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= m; j++)
        {

            if (i % 4 == 0)
            {
                if (j == 1)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
            else if (i % 4 == 2)
            {
                if (j == m)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }


            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}
