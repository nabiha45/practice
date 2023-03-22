#include <stdio.h>

int main()
{
    int n,m;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)


    {
        m = 1;
        for (int j = 1; j <= n+i-1; j++) // n = 4 i = 1
        {


            if (j <= n-i)
            {
                printf(" ");
            }

            else if (j <= n)
            {

                printf("%d", m); //m = 1
                m++; // m = 3
            }

            else if(j > n)
            {
                if (j == n + 1)
                {
                    m--;
                }

                m--;
                printf("%d", m);

            }
        }

        printf("\n");
    }
    return 0;
}
