#include <stdio.h>


int main()
{
    char str[1001];
    gets(str);
    int fr[26] = {0};
    char temp;
    int l = strlen(str);
    int c = 0;

    int i;
    for (i = 0; i < l; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            temp = str[i];

            fr[temp - 'a']++;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (fr[i] != 0)
        {
            c++;
        }
    }
    printf("%d", c);

    return 0;
}
