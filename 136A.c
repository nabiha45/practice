#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        int i, j, ev, od;
        ev = 0;
        od = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }


        for (i = 0; i < n; i++)

        {


            if (i%2 == 0 && arr[i] % 2 != 0)
            {
                ev++;
            }
            if (i % 2 == 1 && arr[i] % 2 != 1)
            {
                od++;
            }
        }

        if (n ==1 && ev == 1)
        {
            printf("-1\n");
        }
        else if (ev == od)
        {
            printf("%d\n", ev);
        }
        else
        {
            printf("-1\n");
        }

    }
    return 0;
}
