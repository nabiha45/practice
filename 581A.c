#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a < b)
    {
        printf("%d ", a);
        if ((b-a) % 2 == 0)
        {
            printf("%d", (b-a)/2);
        }
         else if ((b-a) == 1)
        {
           printf("0");
        }
        else
        {
            printf("%d", (b-a)/2);
        }
    }
    else
    {
        printf("%d ", b);

        if ((a-b) % 2 == 0)
        {
             printf("%d", (a-b)/2);
        }
        else if ((a-b) == 1)
        {
           printf("0");
        }
        else
        {
            printf("%d", (a-b)/2);
        }
    }

    return 0;
}
