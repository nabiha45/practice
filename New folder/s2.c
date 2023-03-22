#include <stdio.h>

int main()
{
    char s2[1001];

    int fr[26] = {0};
    gets(s2);

    int i = 0;

    for (i = 0; s2[i] != '\0'; i++)
    {
        fr[s2[i]-'a'] += 1;
    }

    for (i = 0; i < 26; i++)
    {
        printf("%d ", fr[i]);
    }
}
