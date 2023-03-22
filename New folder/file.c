#include <stdio.h>

struct student
{
    int id;
    char name[20];
    struct data
    {
        int d;
        int m;
        int y;
    }date;
};
int compare(struct student *d1, int id1, int id2)
{
    if (d1[id1].date.y > d1[id2].date.y)
    {
        return id1;
    }
    else if (d1[id1].date.y < d1[id2].date.y) return id2;
    else
    {
         if (d1[id1].date.m > d1[id2].date.m)
    {
        return id1;
    }
    else if (d1[id1].date.m < d1[id2].date.m) return id2;
    else
    {
        if (d1[id1].date.d > d1[id2].date.d)
    {
        return id1;
    }
    else if (d1[id1].date.d < d1[id2].date.d) return id2;
    }
    }
}


int main()
{
    FILE *ptr = fopen("Nabiha.txt", "r");


    int a, b, i, n, id1, id2;
    if (ptr == NULL) printf("No file");
    fscanf(ptr, "%d", &a);
    // printf("%d", a);

    struct student std[a];
    for (i = 0; i < a; i++)
    {
        fscanf(ptr, "%d %s %d %d %d", &std[i].id, &std[i].name, &std[i].date.d, &std[i].date.m, &std[i].date.y);
    }
    fscanf(ptr, "%d %d", &id1, &id2);
    fclose(ptr);

    int l = compare(std, id1, id2);

    FILE *fptr = fopen("Zaima.txt", "w");
    fprintf(fptr, "%d %s %d %d %d", std[l].id, std[l].name, std[l].date.d, std[l].date.m, std[l].date.y);
    fclose(fptr);
    return 0;

}
