#include <stdio.h>

enum data
{
    const1,
    const2,
    const3
};
int main()
{
    enum data v1;
    v1 = const1;
    printf("%d ", v1);
    v1 = const2;
    printf("%d ", v1);
    v1 = const3;
    printf("%d", v1);
    return 0;
}
