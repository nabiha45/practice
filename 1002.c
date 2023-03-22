#include <stdio.h>

int main()
{


    int ar1[3];
    int ar2[3];

    int c, i;
    c = 0;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &ar1[i]);
    }

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &ar2[i]);
    }

    for (i = 0; i < 3; i++)
    {
        if (ar2[i] <= ar1[i])
        {
            c++;
        }
    }

    if ( c == 3)
    {
        printf("It is a kind of magic");
    }
    else
    {
        printf("There are no miracles in life");
    }

    return 0;
}
