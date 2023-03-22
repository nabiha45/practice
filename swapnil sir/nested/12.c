#include <stdio.h>

int main()
{
    int n, flag;
    scanf("%d", &n);
    int i, j;
    for(i = 2; i <= n; i++)
    {


        if (n % i == 0)
        {    flag = 1;
             for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                printf("%d", i);
            }

        }
    }
}
