#include <stdio.h>
#include <string.h>
int main()
{
    char f[6] = "lala.";
    char r[6] = "miao.";
    char str[101];

    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        int fr = 0;
        int rain = 0;
        gets(str);
        // puts(str);
        int l = strlen(str);
        // printf("%d\n",l);

        int i, j;
        for (i = l - 1, j = 4; i > l - 6; i--, j--)
        {
            if (str[i] == f[j])
            {

                fr++;
            }
        }
        for (i = 0, j = 0; i < 5; i++, j++)
        {
            if (str[i] == r[j])
            {

                rain++;
            }
        }
        // printf("%d %d\n", fr, rain);
        if (fr == 5 && rain == 5)
        {
            printf("OMG>.< I don't know!\n");
        }
        else if (fr == 5)
        {
            printf("Freda's\n");
        }
        else if (rain == 5)
        {
            printf("Rainbow's\n");
        }

        else
        {
            printf("OMG>.< I don't know!\n");
        }
    }

    return 0;
}
