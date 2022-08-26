#include<stdio.h>
#define SIZE 10
double sum(int *, int);
int main()
{
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    double sum_value = sum(array, SIZE);
    printf("The sum value is %.3lf\n", sum_value);
    return 0;
}

double sum(int * arr, int size)
{
    double result = 0.0;
    for(int i=0;i<size;i++)
    {
        result += *(arr + i);
    }
    return result;
}