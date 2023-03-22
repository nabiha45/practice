#include <stdio.h>

int main()
{
    char c;
    int i;
    int cnt = 0;

    for (i = 1; i <= 6; i++)
    {
        scanf("%c", &c);
        if (c == '1')
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
