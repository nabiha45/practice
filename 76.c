#include <stdio.h>

int main()
{
    int n, t, l, r, i;


    int arr[100000];

    scanf("%d", &t);

    while (t--)
    {
        int c = 0;
        scanf("%d %d", &l, &r);

        for (i = l; i <= r; i++)
        {
            arr[i] = i;

            printf("%d ", arr[i]);
        }

        for (i = l; i <= r; i++)
        {
            if (arr[i] % 10 == 2 || arr[i] % 10 == 3 || arr[i] % 10 == 9)
            {
                c++;
            }
        }

        printf("%d", c);
    }
}
