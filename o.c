#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d", &a);

    if(a % 2 == 0)
    {
        b = a / 2;
        c = a / 2;

        if(b % 2 == 0 && c % 2 == 0)
        {
            printf("YES");
        }

        else
        {
            printf("NO");
        }
    }

    else if (a % 2 != 0)
    {
        printf("NO");
    }

    return 0;
}
