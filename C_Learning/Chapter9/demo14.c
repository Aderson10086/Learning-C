#include<stdio.h>
void Sort(double *, double * ,double *);
int main()
{

    double a = 10;
    double b = 200;
    double c = 40.5;
    Sort(&a, &b, &c);
    printf("a=%.2lf,b = %.2lf, c=%.2lf\n",a,b,c);


    return 0;
}

void Sort(double *a, double *b, double *c)
{
    double temp1;
    double temp2;
    if(*a>=*b)
    {
        if(*a>=*c)
        {
            if(*b>=*c)
            {
                 // c<b<a
                 temp1 = *a;
                 *a = *c;
                 *c = temp1;
            }
            else
            {
                //b<c<a
                temp1 = *a;
                temp2 = *c;
                *a =*b;
                *c  =temp1;
                *b = temp2;
            }
        }
        else
        {
            //b<a<c
            temp1 = *a;
            *a = *b;
            *b =temp1;
        }
    }
    else
    {
        if(*a>=*c)
        {
         // c<a<b
         temp1 = *b;
         temp2 = *a;
         *a = *c;
         *c = temp1;
         *b = temp2;
        }
        else
        {
            if(*c>=*b)
            {
                // a<b<c
            }
            else
            {
                // a<c<b;
                temp1 = *b;
                *b = *c;
                *c = temp1;
            }
        }
    }
}