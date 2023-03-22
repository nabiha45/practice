#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, i;
    for(i = 1; i <= n; i++)
    {
        if (i == n)
        {
            if (i % 2 == 1)
            {
                i = -i;
                sum+= i;
                printf("%d = %d", i, sum);
            }
            else
            {
                sum+= i;
                printf("%d = %d", i, sum);
            }
        }
        else
        {

        if(i % 2 == 1)
        {
            i = -i;
            printf("%d + ", i);
            sum += i;
        }
        else
        {
            sum+= i;
            printf("%d + ", i);

        }
        }
    }
    return 0;
}
