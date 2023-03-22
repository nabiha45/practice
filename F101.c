#include <stdio.h>

int main()
{
    char str[101];
    gets(str);

    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 32;
        }
        if (str[i] >= 'b' && str[i] <= 'z' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            char temp[101];
            temp[0] = str[i];
            str[i] = ".";
            str[i+1] = temp[0];
        }
    }
    printf("%s", str);
    return 0;
}
