#include <stdio.h>

int main()
{
    int n, i, c;
    c= 0;

    scanf("%d", &n);


    while (n != 1)
    {
        if (n%2 == 0)
        {
            n = n/2; // c = 3
            c++;
        }

        else
        {
            n = (n+1); // c = 4
            c++;
            n = n/ 2;
            c++;// c = 2
        }
    }
    printf("%d", c);
    return 0;
}
