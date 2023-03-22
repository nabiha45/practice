#include <stdio.h>

int main()
{
    int H1, H2, M1, M2, diff, t1, t2, x, y;

    scanf("%d %d", &H1, &M1);

    scanf("%d %d", &H2, &M2);

    t1 = H1*60 + M1;
    t2 = H2*60 + M2;

    diff = (t2 - t1 + 1440) % 1440;

    x = diff / 60;

    y = diff % 60;

    printf("%d %d", x, y);

    return 0;


}
