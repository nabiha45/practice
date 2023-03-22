#include <stdio.h>

int main()
{
    int k, i, j;

    scanf("%d", &k);

    int c = 0;

    for (i = 1; i <= k; i++)
    {
        for (j = i+1; j <= k; j++)
        {
            if (i % 2 == 0 && j % 2 != 0)
            {
                c++;
            }

            else if (i % 2 != 0 && j % 2 == 0)
            {
                c++;
            }
        }
    }

    printf("%d", c);
    return 0;
}
