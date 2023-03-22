#include <stdio.h>

int main()
{
    int t, n, a, c;
    c = 0;

    scanf("%d", &t);

    while (t--) // t = 3
    {
        scanf("%d", &n);
        c = 0;

        while (n--)
        {
            scanf("%d", &a);

            if (a >= 10 && a <= 60)
            {
                c++;
            }
        }
        printf("%d\n", c);



    }
    return 0;
}
