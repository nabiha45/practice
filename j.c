#include <stdio.h>

int main()
{
    int n, i, j, c;

    c = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &j);

            if (j == 1)
            {
                c = 1;
               break;
            }

            else
            {
                c = 0;
            }

        }



        if (c == 1)
        {
            printf("HARD\n");
        }

        else
        {
            printf("EASY\n");
        }

    return 0;
}
