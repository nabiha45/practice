#include <stdio.h>

int main()
{
    int l, b, i, j;

    scanf("%d %d", &l, &b);

    for (i = 1; i <= b; i++)
    {
        for (j = 1; j <= l; j++)
        {
            if (i == 1 || i == b)
            {
                printf("* ");
            }
            else if (j == 1 || j == l)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
