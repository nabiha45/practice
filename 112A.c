#include <stdio.h>

#include <string.h>
int main()
{
    int i;
    char str1[101];
    char str2[101];
    gets(str1);
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            str1[i] = str1[i] - 32;
        }
        if (str2[i] >= 'a' && str2[i] <= 'z')
        {
            str2[i] = str2[i] - 32;
        }
    }

    int r = strcmp(str1, str2);

    if (r < 0 )
    {
        printf("-1");
    }
    else if (r > 0)
    {
        printf("1");
    }
    else if (r == 0)
    {
        printf("0");
    }
    return 0;
}
