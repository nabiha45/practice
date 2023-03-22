#include <stdio.h>

int main()
{
    float arr[10] = {11.2,33.1,45.2,9.8,6.5,2.3,4.5,3.3,1.2,2.2};
    float *ptr1 = &arr[4];
    float *ptr2;
    *ptr2 = *ptr1 + 3;



    float *ptr3 = ptr2 + 3;
    printf("%0.2f\n", *ptr1);
    printf("%0.2f\n", *ptr2);
    printf("%0.2f\n", *ptr3);

    int k = *ptr3;

    printf("%f", abs((double*)ptr2 - (double*)ptr1) +k);
    return 0;
}
