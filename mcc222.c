#include <stdio.h>

int main()
{
    int H1, M1, H2, M2, H, M, s, h,z;

    scanf("%d %d", &H1, &M1);
    scanf("%d %d", &H2, &M2);

    if (H1 > 12 && H2 != 0) {
        h = ((H1 - 12) -  H2) * 60; /* converted to minutes */
    }

    else if (H2 > 12 && H1 != 0) {
            h = ((H2 - 12) - H1) * 60;

     }


     else {
         h = (H2 - H1) * 60;
     }


    if (M1==M2) {

            M = 0;
            z=0;
    }
    else if (M2 > M1) {
        M = M2 - M1 ;
        z=60;

    }

    else if (M1 > M2) {
        M = 60 - (M1 - M2);
        z=0;
    }

    s = M + h+z;

    H = -1;

    for(; s > 60; ) {
        s = s - 60;
        H++;
    }

    if(h < 0) {

            h = -h;

    printf("%d %d", H, s);
    }

    else {
        printf("%d %d", H, s);
    }

    return 0;
}
