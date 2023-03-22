#include <stdio.h>

int main()
{
    int n, t, x, y;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);

        if (n % 2 == 1)
        {
            printf("%d\n", n/2);
        }
        else if (n % 2 == 0)
        {
           n = n -1;

           printf("%d\n", n/2);
        }
    }

    return 0;
}
