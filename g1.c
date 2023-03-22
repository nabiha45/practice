#include <stdio.h>

int main()
{
    int A, B, a, b, c, d;

    scanf("%d %d", &A, &B);

    if(A == 0 || B == 0)
    {
        if (A > B)
        {
            printf("%d", A);
        }
        else
        {
         printf("%d", B);
        }

    }

    else if (A == B || B == A)
    {
        printf("%d", A);
    }

    else if (A == 7 || B == 7)
    {
        printf("7");
    }


    else if ((A+B < 7) && B%2 != 0 && A < B)
    {
        printf("%d", B);
    }

    else if ((A+B)< 7 && A%2 != 0 && B<A)
    {
        printf("%d", A);
    }

    else if((B%2 == 0 && A < B && B != 6) || (A%2 == 0 && B < A && A != 6))
    {
        printf("%d", A+B);
    }

    else if(A == 6 && B%2 == 0 || B == 6 && A%2 == 0 )
    {
        printf("6");
    }

    else if ((A == 4 && B == 5) || (A == 5 && B == 4) )
    {
        printf("5");
    }

    else if (A == 1 && B == 6 || A == 6 || B == 1)
    {
        printf("7");
    }

    else if ((A == 2 && B == 5) || (A == 5 && B == 2))
    {
        printf("7");
    }

    else if ((A == 3 && B == 5) || (A == 5 && B == 3))
    {
        printf("7");
    }

    else if ((A == 3 && B == 6) || (A == 6 || B == 3))
    {
        printf("7");
    }

    else if ((A == 5 && B == 6) || (A == 6 || B == 5))
    {
        printf("7");
    }


    return 0;

}
