#include<stdio.h>
#include<ctype.h>
double power(double x, int a);
double check_input_x();
int check_input_a();
int main()
{
    double x;
    printf("please enter the  first number:\n");
    x = check_input_x();
    int a;
    printf("please enter second integer number:\n");
    a = check_input_a();
    double result = power(x, a);
    printf("%lf^%d = %lf", x, a, result);
    return 0;
}
double check_input_x()
{
    double x;
    char ch;
    while(scanf("%lf", &x)!=1)
    {
        while((ch=getchar())!='\n')
        {
            putchar(ch);
        }
        printf(" is not a number! please try again!\n");
    }
    return x;
}
int check_input_a()
{
    int a;
    char ch;
    while(scanf("%d", &a)!=1)
    {
        while ((ch=getchar())!='\n')
        {
            putchar(ch);
        }
        printf(" is not an integer! try again!\n"); 
    }
    return a;
}
double power(double x, int a)
{
    double result=1;
    if(a>0)
    {
     for(int i=0;i<a;i++)   
     {
        result *= x;
     }
     return result;
    }
    else if(a<0)
    {
        for(int i=0;i<(-a);i++)
        {
            result *= x;
        }
        return 1/result;
    }
    else if(a==0) // important!
    {
        if(x!=0)
        {
            return 1.00;
        }
        else
        {
            printf("0^0 is undefined!\n");
            return 1.00;
        }
    }
}