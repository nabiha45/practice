#include <stdio.h>

void sort(float arr[], int n)
{
    int i, j;
    float temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
struct student
{
    char name[20];
    int id;
    float cgpa;
};

int main()
{
    int n, i;
    scanf("%d", &n);
    struct student var[n];
    for (i = 0; i < n; i++)
        scanf("%s %d %f", &var[i].name, &var[i].id, &var[i].cgpa);
    float arr[1001];
    for (i = 0; i < n; i++)
        arr[i] = var[i].cgpa;
    for (i = 0; i < n; i++)
        printf("%s %d %f\n", var[i].name, var[i].id, var[i].cgpa);
    sort(arr, n);
    for (i = 0; i < n; i++)
        printf("%.2f ", arr[i]);
}
