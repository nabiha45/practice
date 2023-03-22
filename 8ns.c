#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 0;
    int m = 0;
    int b;
    int a = n % 10;

    for (int i = 1; i <= a; i++) // i = 2
    {
        int x = n;
        for (int j = 1; j <= a; j++) // j = 4 a = 3
        {




            if (j <= a-i)
            {
                printf(" ");
            }
            else
            {
                printf("%d", x%10);
                x /= 10;



            }
            }
            printf("\n");
        }

    return 0;

}
