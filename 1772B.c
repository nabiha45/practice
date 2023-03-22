#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int arr[3][3];

    int i, j;
    while (t--)
    {

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 0;
    if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] > arr[1][0] && arr[0][1] > arr[1][1])
    {
        flag = 1;
    }
    else if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
    {
        flag = 1;
    }

    else if (arr[0][0] > arr[0][1] && arr[1][0] > arr[1][1] && arr[1][0] > arr[0][0] && arr[1][1] > arr[0][1])
    {
        flag = 1;
    }
     else if (arr[0][0] > arr[0][1] && arr[1][0] > arr[1][1] && arr[1][0] < arr[0][0] && arr[1][1] < arr[0][1])
    {
        flag = 1;
    }


    else
    {
        flag = 0;
    }
    if (flag == 1)
    {
        printf ("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }


    return 0;
}
