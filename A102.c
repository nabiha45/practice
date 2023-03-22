#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10000];
    char str2[10000];

    int cnt, i;
    cnt = 0;
    gets(str1);
    int l = strlen(str1);
    str2[l] = strrev(str1);


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
    printf("%s", str2);
    return 0;

}
