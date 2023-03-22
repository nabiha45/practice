#include <stdio.h>

int main()
{
    int n, c;
    c = 0;
    scanf("%d", &n);
    getchar();

    char str[101];
    gets(str);
    int i;
    for (i = 0; i < n; i++)
    {
        if (i != n-1)
        {
        if (str[i] == str[i+1])
        {
            c++;
        }
        }
    }
    printf("%d", c);
    return 0;
}
