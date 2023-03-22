#include <stdio.h>

int main()
{
    int x, n;
    x = 0;

    scanf("%d", &n);

    char a, b, c;

    while (n--)
    {
        getchar();
        scanf("%c%c%c", &a, &b, &c);

        if ((a == '+' && b == '+' && c == 'X') || (a == 'X' && b == '+' && c == '+'))
        {
            x++;
        }
        else if ((a == '-' && b == '-' && c == 'X') || (a == 'X' && b == '-' && c == '-'))
        {
            x--;
        }
    }
    printf("%d", x);
    return 0;
}
