#include <stdio.h>

int main()
{
    int H1, M1, H2, M2, H, M, h, s;

    scanf("%d %d", &H1, &M1);

    scanf("%d %d", &H2, &M2);

     h = 60 * (H1 - H2);

     if(h < 0) {
        h = -h;
     }

     else {
        h = h;
     }

     s = h + 60 - (M1 - M2);

     H = -1;

    for(; s >= 60 ; ) {
            s = s - 60;
    H++;

    }

    printf("%d %d", H, s);

     return 0;
}
