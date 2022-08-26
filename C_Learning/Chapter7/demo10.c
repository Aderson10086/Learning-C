#include<stdio.h>
#define MONEY_PER_HOUER 10.00
int main()
{
    float number;
    printf("please enter you work times(h).\n");
    scanf("%f", &number);
    float salary;
    float salary_tax;
    salary = (number<40)?(number*MONEY_PER_HOUER):(40*MONEY_PER_HOUER+(number-40)*MONEY_PER_HOUER*1.5);
    printf("The salary of befor tax is %.2f.\n", salary);
    if(salary<=300)
    {
        salary_tax = 0.15 * salary;
    }
    else if(salary>300&&salary<=450)
    {
        salary_tax = 0.15*300 + (salary-300) * 0.20;
    }
    else
    {
        salary_tax = 0.15*300+0.2*150+(salary-450)*0.25;
    }
    printf("The tax of your salary is %.2f\n", salary_tax);
    printf("You obtained money is %.2f\n",salary-salary_tax);
    return 0;
}