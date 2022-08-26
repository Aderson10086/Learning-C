#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double recon_average(double, double);
double check_input(void);
int main()
{
    printf("This is a program to calculte reconcile average of two non-zero numbers\n");
    double a;
    double b;
    printf("Enter the first number.\n");
    a = check_input();
    printf("Enter the second number.\n");
    b = check_input();
    printf("The reconcile average of %.5lf and %.5lf is %.5lf\n",a,b,recon_average(a,b));
    return 0;

}

double check_input(void)
{
    double number;
    double eps = 1e-10;
    char ch;
    while((scanf("%lf", &number) !=1)||(fabs(number-0.0)<eps))
    {
        while(ch=getchar()!='\n')
        {
            putchar(ch);
        }
        printf(" is not a valid input! ");
        printf("please input a non-zero number\n");
    }
    return number;
}

double recon_average(double a, double b)
{
    double temp;
    temp = (1/a + 1/b)/2;
    return 1/temp;
}
// very important probelm!!!