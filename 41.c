#include <stdio.h>

int main()

{
    int i,j;

    int ara[10] = {1,2,3,4,5,6,7,8,9,10};

    int ara2[10];

    for(i = 0, j = 9; i < 10; i++, j--)
    {
        ara2[j] = ara[i];

    }

    for (j = 0; j < 10; j++)
    {
        printf("%d ", ara2[j]);
    }

    return 0;
}
