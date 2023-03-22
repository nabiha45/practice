#include <stdio.h>

int main()

{
    int x;

    scanf("%d", &x);

    if (x == 5 || x == 1 || x == 2 || x == 3 || x == 4)
    {
        printf("1");
    }

    else if (x % 5 == 0)
    {
        printf ("%d", x/5);
    }

   return 0;
}
