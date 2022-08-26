#include<stdio.h>
void large_of(double * , double *);
int main(){

    double a = 30.0;
    double b =  20.0;
    printf("before large of a= %lf, b=%lf\n", a, b);
    large_of(&a, &b);
    printf("after large of a = %lf, b = %lf\n",a, b);
    return 0;
}
void large_of(double *x, double *y)
{
    double temp;
    temp = (*x>*y)?*x:*y;
    *x = temp;
    *y = temp;
}