#include <stdio.h>

int main()
{
    int r;
    scanf("%d", &r);

    while (r--)
    {
        int l;
        scanf("%d", &l);
        getchar();

        int c = 0;
        int i;

        char str[501];
        gets(str);
        for (i = 0; i < l+1; i++)
        {
            if (str[i] == 'H')
            {
                c++;
            }
            else if (str[i] == 'T')
            {
                c--;
            }
            if (c == 2 || c == -1)
            {
                break;
            }
        }

        if (c == 0)
        {
            printf("Valid\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    return 0;
}
