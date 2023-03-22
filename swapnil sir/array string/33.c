#include <stdio.h>

int main()
{
    char str[10001];
    int i;
    gets(str);

    int f[26] = {0};
    for(i = 0; str[i] != '\0'; i++)
    {
        f[str[i] - 'a'] += 1;
    }
    for(i = 0; i < 26; i++)
    {
        if(f[i] != 0)
        {
            char c = 'a' + i;
            printf("\t%c = %d\n", c, f[i]);
        }
    }
}
