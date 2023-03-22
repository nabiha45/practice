#include <stdio.h>

int main()
{
    int n, i, a, b, x, c, y;

    a = 0;
    c = 0;

    scanf("%d", &n);

    for(i = n; i != 0; i/=10)
    {

        a = a*10 + (i % 10);

    }

    if (n - a == 0)
    {
           if( n % 11 == 0)
           {
               printf("11");
           }

       else
       {

       }
    }
    else
    {

    }



    return 0;
}
