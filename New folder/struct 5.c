#include <stdio.h>
struct student
{
    char name[20];
    int id;
    int cgpa;
};

int sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

}

int main()
{
    int n, i;
    scanf("%d", &n);
    struct student var[n];
    for (i = 0; i < n; i++)
    {
        scanf("%s %d %d", &var[i].name, &var[i].id, &var[i].cgpa);
    }
    int arr[1001];
    for (i = 0; i < n; i++)
    {
        arr[i] = var[i].cgpa;
    }
      for (i = 0; i < n; i++)
    {
        printf("%s %d %f\n", var[i].name, var[i].id, var[i].cgpa);
    }

    sort(arr, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", sort(arr, n));
    }
}
