#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m, c;
    m = 0;
    c = 0;

    int x, y;

    while (n--)
    {
        scanf("%d %d", &x, &y);

        if (x>y)
        {
            m++;
        }
        else if (x < y)
        {
            c++;
        }
    }
    if (m > c)
    {
        printf("Mishka");
    }
    else if (m < c)
    {
       printf("Chris");
    }
    else if (m == c)
    {
        printf("Friendship is magic!^^");
    }
    return 0;
}

