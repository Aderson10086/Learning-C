#include<stdio.h>
void copy_arr(float *, float *, float *);
void show(const float arr[], int size);
int main()
{
    float source[7] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
    printf("source array:");
    show(source,7);
    float target[3];
    copy_arr(target, &source[2], &source[4]);
    printf("target array: ");
    show(target, 3);
    return 0;
}

void copy_arr(float *target, float *start, float*end)
{
    while(start<=end)
    {
        *target = *start;
        target++;start++;
    }
}

void show(const float arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%.1f  ", arr[i]);
    }
    putchar('\n');
}