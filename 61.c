#include <stdio.h.>
int main()
{
    int x, a;
    a = 0;

    scanf("%d", &x);

    for (; x >= 9; a++)
    {
        x = x - 10;
    }

    for (; x >= 0; a++)
    {
        x = x-5;
    }

    printf("%d", a);

    return 0;
}
