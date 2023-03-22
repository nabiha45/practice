#include <stdio.h>

int main()

{
    int sum, x;

    scanf("%d", &x);

    if (x % 2 == 0)
    {
        sum = x / 2;

        printf("%d", sum);
    }

    else
    {
        sum = -(x+1)/2;

        printf("%d", sum);
    }

    return 0;
}
