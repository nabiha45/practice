#include <stdio.h>
#include <string.h>

int main()
{
    char s1[101];
    char s2[102];
    gets(s1);
    gets(s2);
    int l = strlen(s1);

    int i, j = 0, flag = 1;
    char s3[101];
    for (i = l-1; i >= 0; i--)
    {
        s3[j++] = s1[i];
    }


    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s2[i] != s3[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;

}
