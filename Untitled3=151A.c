#include <stdio.h>

int main()
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d", &n,&k,&l,&c,&d,&p,&nl,&np);

    int vol = k*l;
    int arr[3];
    arr[0] = vol/nl;

    arr[1] = c*d;
    arr[2] = p/np;

    int min = arr[0];
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
       // printf("%d ", arr[i]);
    }
    //printf("%d\n", min);
    printf("%d", min/n);
    return 0;

}
