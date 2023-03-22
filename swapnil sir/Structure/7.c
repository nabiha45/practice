#include <stdio.h>


typedef struct players
{
    char name[100];
    int m;
    float o;
    int w;
    int r;
}pl;
int main()
{
    int i;
    pl p[2];

    for(i = 0; i < 2; i++)
    {
        gets(p[i].name);
        scanf("%d %f %d %d", &p[i].m, &p[i].o, &p[i].w, &p[i].r);
        getchar();
    }
    for(i = 0; i < 2; i++)
    {
        puts(p[i].name);
        printf("%d %f %d %d\n", p[i].m, p[i].o, p[i].w, p[i].r);
    }
}
