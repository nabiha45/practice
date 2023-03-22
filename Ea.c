#include <stdio.h>

int main()
{
    int a, b, c;
    int i;
    int temp = 0;

    scanf("%d %d %d", &a, &b, &c);

    for (i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            temp = i;
            break;
        }

    }

    if (temp > 0)
    {
        printf("%d", temp);
    }
    else
    {
        printf("-1");
    }


    return 0;
}
