#include <stdio.h>

int main()
{
    int a, u;
    double t, s;

    scanf("%d", &u);

    int count = 0;

    for(a = 1; a <= u; a++)
    {
        count++;

        if (count <= 50)
        {
         t = count*0.50;
        }

        else if (count <= 150)
        {
            t = 50*0.50 + (count - 50)*0.75;
        }

        else if (count < 250)
        {
            t = 50*0.50 + 100 * 0.75 + (count - 150)*1.20;
        }

        else if (count >= 250)
        {
            t = 50*0.50 + 100 * 0.75 + 100*1.20 + (count - 250)*1.50;
        }
    }

    s = t + t*0.20;


    printf("%0.2lf", s);

    return 0;
}
