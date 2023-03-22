#include <stdio.h>

int main()
{
     int p, d;

     float a, t;

     scanf("%d %d", &p, &d);

     a = d / 100.0;



     t = p*10 - a*p*10;

     printf("%0.1f", t);

}
