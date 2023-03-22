#include <stdio.h>

int main()
{
    int a, b, c, d, m, n;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a > b && c > d)
    {
        m = a;
        n = c;

        if((m > c || m > d) &&(n > a && n > b))
        {
            printf("YES");
        }

        else
        {
            printf("NO");
        }
    }

    if(b > a && d > c)
    {
        m = b;
        n = d;

        if((m > c || m > d) &&(n > a && n > b))
        {
            printf("YES");
        }

        else
        {
            printf("NO");
        }
    }

    return 0;
}
