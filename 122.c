#include <stdio.h>

int main()
{
    int i, j, row, col;
    int c = 0;

    int arr[5][5];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                row = i;
                col = j;

            }
        }
    }
    c = 0;
    while (col < 2)
    {
        col++;
        c++;
    }

    while (col > 2)
    {
        col--;
        c++;
    }
    while (row < 2)
    {
        row++;
        c++;
    }
    while (row > 2)
    {
        row--;
        c++;
    }
    printf("%d", c);
    return 0;
}
