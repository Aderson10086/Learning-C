#include<stdio.h>
#include<stdlib.h>
float CalTax(int kind, float salary);
int main()
{
    while(1)
    {
        printf("This is program for calculate tax for different kinds\n");
        printf("There are four kins of tax policy for different peoples\n");
        printf("Single:1\tHost:2\tMarried:3\tDivorce:4\tQuit:5\n");
        printf("please input your kind(1,2,3,4):\n");
        int kind;
        scanf("%d", &kind);
        if(kind==5)
        {
            printf("quit systems!\n");
            exit(1);
        }
        float salary;
        printf("Please enter your salary\n");
        scanf("%f", &salary);
        printf("Your kind is %d, you salary is %.2f, and your tax is %.2f\n", kind, salary, CalTax(kind, salary));
    }

    return 0;
}

float CalTax(int kind, float salary)
{
    static float tax;
    switch (kind)
    {
        case 1:
            tax = (salary<=17850.0)?(salary*0.15):(17850*0.15+(salary-17850)*0.28);
            break;
        case 2:
            tax = (salary<=23900.0)?(salary*0.15):(23900*0.15+(salary-23900)*0.28);
            break;
        case 3:
            tax = (salary<=29750.0)?(salary*0.15):(29750*0.15+(salary-29750)*0.28);
        case 4:
            tax = (salary<=14875.0)?(salary*0.15):(14875*0.15+(salary-14875)*0.28);
        default:
            break;
    }
    return tax;
}