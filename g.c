#include <stdio.h>


    int main ()
    {
        int A, B, a, b, c, d, e;
        a = 0;
        b = 0;
        c= 0;
        d=0;

        scanf("%d %d", &A, &B);

        if(A <=3)
        {
            a  = A % 2;
            b = 2;
        }

        else if (B <= 3)
        {
            c = B % 2;
            d = 2;
        }



        else if (A >= 4 && A <= 6)
        {
            a = A % 4;
            b = 4;
        }
        else if (B >= 4 && B <= 6)
        {
            c = B % 4;
        }   d = 4;

      printf("%d %d %d %d", a, b, c, d);
    }
