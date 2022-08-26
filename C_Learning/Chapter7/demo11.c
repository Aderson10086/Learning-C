#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("please entere your salary level\n");
    printf("******************************************************\n");
    printf("1) $8.75/hr\t2)$9.33/hr\n");
    printf("3)$10.00/hr\t4)$11.20/hr\n");
    printf("5) quit\n");
    printf("******************************************************\n");
    printf("Enter the number corresponding to be desired pays rate or action.\n");
    int Level;
    while(1)
    {
        scanf("%d", &Level);
        if(Level>5||Level<0)
        {
            printf("Error inputs, please input number 1~5!!!\n");
        }
        else 
        {
            break;
        }
    }
    if(Level==5)
    {
        printf("quit code!\n");
        exit(1);
    }
    else
    {
        printf("Your salary level is %d\n", Level);
        float time;
        printf("please enter your work time(h)\n");
        scanf("%f", &time);
        float salary;
        switch (Level)
        {
        case 1:
            salary = (time<=40.0)?(8.75*time):(8.75*time+(time-40)*8.75*1.5);
            break;
        case 2:
            salary = (time<=40.0)?(9.33*time):(9.33*time+(time-40)*9.33*1.5);
            break;
        case 3:
            salary = (time<=40.0)?(10.00*time):(10.00*time+(time-40)*10.00*1.5);
            break;
        case 4:
            salary = (time<=40.0)?(11.20*time):(11.20*time+(time-40)*11.20*1.5);
            break;
        default:
            break;
        }
        printf("The salary of you is :%.2f\n", salary);

        float salary_tax;
        if(salary<=300)
        {
            salary_tax = 0.15 * salary;
        }
        else if(salary>300&&salary<=450)
        {
            salary_tax = 300 * 0.15 + (salary-300)*0.20;
        }
        else
        {
            salary_tax = 300*0.15 + 150 *0.20 + (salary-450)* 0.25;
        }
        printf("You have worked %.2f hours, and salary of before tax is %.2f$, the tax of salary is %.2f$, and pay for you %.2f$.\n", 
                time, salary, salary_tax, salary-salary_tax);
    }
    return 0;
}