#include <stdio.h>

int main()
{
    int x, a;
    int n = 1;

    scanf("%d", &a);

    x = 0;

    for(x = 0; x % a != 0; )
    {
        x = x + n;
        n++;
    }
    if (x % a == 0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

}
