#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);


    while (t--)
    {
        int n, a, b, c, r;

        c = 0;
        scanf("%d %d %d", &n, &a, &b);


        if (b >= a && a < n)
        {
            printf("-1\n");
        }

        else if (a>=n)
        {
            printf("1\n");
        }
        else
        {
         int x=0;
            while(x<n)
            {
                x=x+a;
                if(x>=n)
                {
                    c++;
                    break;
                }
                else
                {
                    x=x-b;
                    c++;
                }
            }


        printf("%d\n", c);
        }
        }

    return 0;
}
