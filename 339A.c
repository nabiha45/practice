#include <stdio.h>

int main()
{
    char str[101];
    gets(str);
    int i, j;
    int l = strlen(str);
    int temp = 0;

    for (i = 0; i < l; i++)
    {
        for (j = i; j < l; j++)
        {
            if (str[i] != '+' && str[j] != '+')
            {

            if (str[i] > str[j])
            {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
            }

        }
    }

        printf("%s", str);
    return 0;
}
