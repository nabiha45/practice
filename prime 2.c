#include <stdio.h>

int findprime (int n)
{
    int i,  j, flag = 1;

        for (j = 2; j< n; j++)
        {
            if (n % j == 0)
            {
                flag = 0;
                break;
            }

        }
        return flag;

    }

int main()
{
    int n, j, c;
    c = 0;
    scanf("%d", &n);


    for (j = 2; j <= n; j++)
    {
        int m = findprime(j);
        if (m == 1)
        {
            c++;
        }
    }
    printf("%d", c);

}
