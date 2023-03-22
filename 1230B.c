#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    char s1[10001];
    getchar();
    gets(s1);

    int i;
    if (n > 1)
    {
    for (i = 0; i < k; i++)
    {
            if (i == 0)
            {
                s1[i] = 1;
            }
            else
            {
                s1[i] = 0;
            }
        }
    }
    else if (n == 1)
    {
        s1[0] = 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", s1[i]);
    }
}

