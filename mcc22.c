#include <stdio.h>

int main()
{
    int H1, M1, H2, M2, H, M, h, m;

    scanf("%d %d", &H1, &M1);

    scanf("%d %d", &H2, &M2);

    if(H2 > 12) {

        h = ((H2 - 12) - H1) * 60;


    }

    printf("%d", h);

    return 0;
}
