#include <stdio.h>
int main()
{
    int n, m, i, j, c = 0;
    char color;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++) // i = 1, 2 3
    {
        for (j = 1; j <= m; j++) // j = 1 2 1 2
        {
            getchar();
            scanf("%c", &color);

            if (color == 'C' || color == 'Y' || color == 'M')
            {
                c++;
            }
        }
    }
    if (c == 0)
    {
        printf("#Black&White");
    }
    else
    {
        printf("#Color");
    }
    return 0;
}
