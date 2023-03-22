#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    gets(s);
    int l = strlen(s);

    int w = 1;

    for (int i = 0; i < l+1; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            w++;
        }
    }
    printf("%d", w);
    return 0;

}
