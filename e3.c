#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a % 6 == 0)
    {
        printf("yes");
    }

    else if(a % 6 == 1)
    {
        printf("yes");
    }

    else if (a % 6 == 3)
    {
        printf("yes");
    }

    else
    {
        printf("no");
    }


    return 0;
}
