#include<stdio.h>
int max=-9999;
void input(int a[], int n, int i)
{
    if(i==n) return;
    scanf("%d", &a[i]);
    input(a,n,i+1);
}
int check(int a[],int n,int i)
{
    if(i==n-1) return max;
    int b=gcd(a[i],a[i+1]);
    if(max<b) max=b;
    return check(a,n,i+1);
}
int gcd(int a, int b)
{
    if(a==0) return b;
    return gcd(b%a,a);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    input(arr, n,0);


    int res=check(arr,n,0);
    printf("%d", res);

}
