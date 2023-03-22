#include <stdio.h>

int main()

{
    int x;
    double t, y;

    scanf("%d %lf", &x, &y);



    if (x % 5 == 0 && y > x + 0.5)
    {
        t = y - x - 0.5;
        printf("%0.2lf", t);
    }

    else if (x % 5 != 0 || y <= x+0.5)
    {
    printf("%0.2lf", y);
    }

    return 0;
}
