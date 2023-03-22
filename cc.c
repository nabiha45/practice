#include <stdio.h>

int main()
{
    int t, n;
    int s[1000];
    int d[1000];
    scanf("%d", &t);
    int c;

    while (t--)
    {
        c = 0;
        scanf("%d", &n);

        for (int i = 1; i <=n;i++)
        {
            scanf("%d", &s[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &d[i]);
        }

        for (int i = 1; i <= n; i++)
        {
            if (s[i] == d[i])
            {
                c++;
            }
        }
        printf("%d\n", c);

    }
    return 0;
}
