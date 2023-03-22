#include <stdio.h>

int main()
{
    int s, p, total;



    int t, n;
    scanf ("%d", &t);

    while (t--)

    {    int arr[12] = {0};
        total = 0;
        scanf("%d", &n);
        while (n--)
        {
        scanf("%d %d", &p, &s);



                if (arr[p] < s)
                {
                    arr[p] = s;
                }
        }


        for (int i = 1; i <= 8; i++)
        {
            total += arr[i];
        }



        printf("%d\n", total);
    }
    return 0;
}
