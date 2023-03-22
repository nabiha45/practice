#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10000];
    char str2[10000];

    gets(str1);

    int l = strlen(str1);

    int i, j, cnt;
    cnt = 0;
    j =0;
    for (i = l-1; i >= 0; i--)
    {
        str2[j++] = str1[i];
    }
    str2[i] = '\0';
    for (i = 0; i < l; i++)
    {
        if (str1[i] == str2[i])
        {
            cnt++;
        }


    }
    if (cnt == l)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
