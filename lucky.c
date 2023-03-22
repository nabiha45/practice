#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int c = 0;
    int flag = 0;

    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 || n % 477 == 0 || n % 777 == 0 )
    {
        printf("YES\n");
    }
    else
    {

    for (i = n; i != 0; i/= 10)
    {
        int j;
        j = i % 10;
        if (j == 4 || j == 7)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
    return 0;
}
