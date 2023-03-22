#include <stdio.h>

int main()
{
    int n, i, j;
    int arr[100];

   int  temp = 0;



    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
           if(arr[i] > arr[j]) {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
        }
    }

    printf("3rd minimum is %d\n", arr[2]);
    printf("3rd maximum is %d\n", arr[n-3]);

    int c = 0;


}
