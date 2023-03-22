#include <stdio.h>


struct T20
{
    char name[100];
    int m;
    float over;
    float w;
    int runs;
};
int main()
{
    struct T20 pl[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        scanf("%s", &pl[i].name);
        scanf("%d", &pl[i].m);
        scanf("%f", &pl[i].over);
        scanf("%f", &pl[i].w);
        scanf("%d", &pl[i].runs);

    }

    for (i = 0; i < 2; i++)
    {
        printf("%s", pl[i].name);
        printf("%d", pl[i].m);
        printf("%f", pl[i].over);
        printf("%f", pl[i].w);
        printf("%d", pl[i].runs);
    }

}
