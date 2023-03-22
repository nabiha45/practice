#include <stdio.h>
#include <math.h>

int main()
{
    int h1, m;
    float h2, t;

    scanf("%d %f", &h1, &h2);

        t = (h1+h2)*(h1+h2) - (h2*h2);

    m = sqrt(t);

    printf("%d", m);

    return 0;

}
