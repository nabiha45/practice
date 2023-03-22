#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1000];
    char s2[1000];

    gets(str1);



    int i, j, n;
    scanf("%d", &n);
    while (n--)
    {
         int cnt = 0;
        scanf("%s", &s2);
        int l = strlen(s2);


        for (i = 0; str1[i] != '\0'; i++)
        {
            for (j = 0; s2[j] != '\0'; j++)
            {
                if (str1[i] == s2[j])
                {
                  cnt++;
                }
            }
        }
        if (cnt == l)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;

}
