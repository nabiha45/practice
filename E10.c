#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    while (n--)
    {
        char s1[21];
        char s2[21];
        int c = 0;

        gets(s1);
        gets(s2);
        int i, flag;
        int l1 = strlen(s1);
        int l2 = strlen(s2);


        if (l1 != l2)
        {
            printf("No\n");
        }
        else
        {
            for (i = 0; s1[i] != '\0'; i++)
            {
                if (s1[i] == 'a' || s1[i] =='e' || s1[i] == 'i' || s1[i] =='o' || s1[i] == 'u' || s1[i] == s2[i])
                {
                    c++;
                }

            }
            if (c == l1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }



    }
}
