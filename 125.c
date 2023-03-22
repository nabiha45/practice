#include <stdio.h>

int main()
{
    int n, i, j, c;
    scanf("%d", &n);
    int ara[n];
    int x;



    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (ara[i] == x)
        {
            c = i;
            break;
        }
        else
        {
            c = -1;
        }
    }
    printf("%d\n", c);
    return 0;
}
