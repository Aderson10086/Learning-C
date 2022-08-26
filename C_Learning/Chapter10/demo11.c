#include<stdio.h>
#define SIZE 5
void copy_arr(double *, const double *, int size);
void copy_ptr(double *, const double *, int size);
void copy_ptrs(double *, double *, double *);
void show(const double *, int szie);
int main()
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE];
    printf("Source array:");
    show(source, SIZE);
    copy_arr(target1, source, SIZE);
    printf("Target1 array:");
    show(target1, SIZE);
    double target2[SIZE];
    copy_ptr(target2,source, SIZE);
    printf("Target2 array:");
    show(target2, SIZE);
    double target3[SIZE];
    copy_ptrs(target3, source, source+SIZE);
    printf("Target3 array:");
    show(target3, SIZE);
    return 0;
}

void copy_arr(double arr_target[], const double arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        arr_target[i] = arr[i];
    }
}

void copy_ptr(double arr_traget[], const double arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        arr_traget[i] = *(arr+i);
    }
}
void copy_ptrs(double arr_target[], double *start, double *end)
{
    while(start<=end)
    {
        *(arr_target) = *start;
        start++;arr_target++;
    }
}
void show(const double arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%.1f  ", arr[i]);
    }
    putchar('\n');
}