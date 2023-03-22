#include <stdio.h>

int main()
{
    int n;
    int i, j;
    int arr[100][3];
    int a2[3];
    a2[0] = 0;
    a2[1] = 0;
    a2[2] = 0;

    int c = 0;
    scanf("%d", &n);

       int x, y, z;
       for (i = 0; i < n; i++)
       {
           for (j = 0; j < 3; j++)
           {
               scanf("%d", &arr[i][j]);
           }
       }
       for (j = 0; j < 3; j++)
       {
           for (i = 0; i < n; i++)
           {
               a2[j] = arr[i][j] + a2[j];
           }

       }




    for (i = 0; i < 3; i++)
       {

           if (a2[i] == 0)
           {
               c++;
           }
       }


    if (c == 3)
       {
           printf("YES");
       }
       else
       {
           printf("NO");
       }
    return 0;
}
