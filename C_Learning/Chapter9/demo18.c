#include<stdio.h>
void to_base_n(unsigned long, int);
int main()
{  
    printf("This is a program to convert a number to d(such 2,8)scale reprensentation!\n ");
    unsigned long n =10;
    int d = 8;
    to_base_n(n,d);



    return 0;
}



void to_base_n(unsigned long n, int d)
{
    int r;
    r = n % d;
    if(n>=d)
    {
        to_base_n(n/d, d);
    }
    printf("%d ",r);

}