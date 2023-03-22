#include <stdio.h>
int count(int a[], int n, int c, int i)
{
  if (i == n)
    return c;
  int ff = check(a[i], a[i] - 1);
  if (ff == 1)
    c++;
  return count(a, n, c, ++i);
}
int check(int n, int i)
{
  if (n == 1)
    return 0;
  if (i == 1)
    return 1;
  if (n % i == 0)
    return 0;
  return check(n, --i);
}
int main()
{
  int n;
  scanf("%d", &n);
  int a[n], c = 0, i = 0;
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int res = count(a, n, c, i);
  printf("%d", res);
}
