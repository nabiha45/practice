#include <stdio.h>
#include <string.h>

int main()
{
    int n, a, d;
    a = 0;
    d = 0;


    scanf("%d", &n);
    char str[n];

    scanf("%s", &str);

    int i;
    for (i = 0; i < n; i++)
    {

        if (str[i] == 'A')
        {
            a++;
        }

    }

    for (i = 0; i < n; i++)
    {
        if (str[i] == 'D')
        {
            d++;
        }
    }

    if (a > d)
    {
        printf("Anton");
    }
    else if (a < d)
    {
        printf("Danik");
    }
    else if (a == d)
    {
        printf("Friendship");
    }
    // printf("%d %d", a, d);

    return 0;
}
