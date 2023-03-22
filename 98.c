#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c;
        int count = 0;

        scanf("%d %d %d", &a, &b, &c);

        int x[a];
        int y[b];
        int z[c];

        for (int i = 0; i < a; i++)
        {
            scanf("%d", &x[i]);
        }
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &y[i]);
        }
        for (int i = 0; i < c; i++)
        {
            scanf("%d", &z[i]);
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    if (x[i] <= y[j] && y[j] <= z[k])
                    {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
