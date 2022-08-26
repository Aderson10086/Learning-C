#include<stdio.h>
#define STAR_LINE "******************"
double power_recursion(double x, int a);
double get_x();
int get_a();
int main()
{
    printf("%s\n", STAR_LINE);
    printf("This is a program to calculate x^a.\n");
    printf("%s\n", STAR_LINE);
    printf("Input x = ");
    double x = get_x();
    printf("Input a = ");
    int a = get_a();
    printf("%lf^%d = %lf\n", x,a, power_recursion(x,a));
    return 0;
}

double power_recursion(double x, int a)
{
    double result;
    if(a>0)
    {
        result = power_recursion(x, a-1) * x;
    }
    else if(a<0)
    {
        result = 1/power_recursion(x, -a-1) * (1/x);
    }
    else if(a==0)
    {
        if(x!=0)
            result = 1;
        else
        {
            printf("0^0 is undefined!\n");
            result = 1;
        }
    }
    return result;
}

int get_a()
{
    int integer;
    char ch;
    while((scanf("%d", &integer))!=1)
    {
        while((ch = getchar())!='\n')
        {
            putchar(ch);
        }
        printf(" is not an integer, please try again");
    }
    return integer;
}

double get_x()
{
    double number;
    char ch;
    while((scanf("%lf", &number))!=1)
    {
        while((ch = getchar())!='\n')
        {
            putchar(ch);
        }
        printf(" is not a number, please try again");
    }
    return number;
}