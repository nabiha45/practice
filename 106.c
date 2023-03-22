#include <stdio.h>

int main()
{
    int t, a, b, c;
    scanf("%d", &t);

    while (t--)
    {
        c = 0;
        scanf("%d %d", &a, &b);




        if (a % b != 0)
        {
           printf("%d\n", b-(a%b));
        }
        else
        {
            printf("0\n");
        }

    }
    return 0;
}
