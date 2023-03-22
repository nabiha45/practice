#include <stdio.h>

int main()
{
    int n, i, j, flag;
    while(1)
    {   flag = 1;
        scanf("%d", &n);
        if(n == 0)
        {
            printf("bye");
            break;
        }
        else
        {
            for(i = 2; i < n; i++)
            {
                if(n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag ==1)
            {
                printf("Prime");
            }
            else
            {
                printf("Not prime");
            }
        }
    }
}
