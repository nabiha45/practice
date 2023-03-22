#include <stdio.h>

int main()
{
    int arr[] = {5,11,43,17,19,23};
    for(int i = 1; i < arr[0] / 2; i++)
    {
        int t = arr[i];
        arr[i] = arr[arr[0]-i];
        arr[arr[0]-i] = t;
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
