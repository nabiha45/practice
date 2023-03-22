#include <stdio.h>

void input (int arr[], int n, int i)
{
    if (i == n) return;
    scanf("%d", &arr[i]);
    input(arr, n, ++i);
}

int count(int arr[], int n, int c, int i)
{
    if (i == n) return c;
    int ff = check(arr[i], arr[i]-1);

    if (ff == 1) c++;
    return count(arr, n, c, ++i);

}
int check(int n, int i)
{
    if (n == 1) return 0;
    if (i == 1) return 1;
    if (n%i== 0) return 0;
    check(n, --i);
}


int main()
{
    int arr[1001];
    int n, c=0;
    int i;
    scanf("%d", &n);

    input(arr, n, i);
    int ans = count(arr, n, c, 0);
    printf("%d", ans);
}
