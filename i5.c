#include <stdio.h>

int main()
{
    int a, b, c;
    int n;
    int d = 0;
    int arr[10000];

    scanf("%d", &n);



    for (a = 1; a <= 9; a++)
    {
        for (b = 0; b <= 9; b++)
        {
            for (c = 0; c <= 9; c++)
            {
                if (a+b+c == n)
                {
                    d++;

                }
            }

        }
    }
    printf("%d\n", d);

     for (a = 1; a <= 9; a++)
    {
        for (b = 0; b <= 9; b++)
        {
            for (c = 0; c <= 9; c++)
            {
                if (a+b+c == n)
                {
                    printf("%d%d%d\n", a, b, c);

                }
            }

        }
    }


    return 0;
}
