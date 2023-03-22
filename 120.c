#include <stdio.h>

int main()
{
    char str[100];
    gets(str);
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    puts(str);
    return 0;
}
