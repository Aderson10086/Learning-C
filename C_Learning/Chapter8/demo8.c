#include<stdio.h>
float check_number(void);
char get_choice(void);
char get_first(void);
int main()
{   
    printf("This is a calculator programming!\n");
    int ch;
    float num1;
    float num2;
    while((ch=get_choice())!='q')
    {

        switch (ch)
        {
            case 'a':
                printf("Enter first number:\n");
                num1 = check_number();
                printf("Enter second number:\n");
                num2 = check_number();
                float add;
                add = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, add);
                break;
            case 's':
                printf("Enter first number:\n");
                num1 = check_number();
                printf("Enter second number:\n");
                num2 = check_number();
                float subs;
                subs = num1-num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, subs);
                break;
            case 'm':
                printf("Enter first number:\n");
                num1 = check_number();
                printf("Enter second number:\n");
                num2 = check_number();
                float multi;
                multi = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, multi);
                break;
            case 'd':
                printf("Enter first number:\n");
                num1 = check_number();
                printf("Enter second number:\n");
                while((num2 = check_number())==0)
                {
                    printf("enter a number not zero.\n");
                }
                float divide;
                divide = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, divide);
                break;
            
            default:
                break;
        }
    }
    printf("Bye!\n");
    return 0;
}

float check_number(void)
{
    float num;
    char ch;
    while(scanf("%f", &num) !=1)
    {
        while((ch=getchar())!='\n')
        {
            putchar(ch);
        }
        printf(" is Not a number please try again");
        printf("integer value such as 10.9, 20, -100.\n");
    }
    return num;
}

char get_choice(void)
{
    int ch;
    printf("Enter the operation of your choice\n");
    printf("a. add    s. substract\n");
    printf("m. multiply     d. divide\n");
    printf("q. quit\n");
    ch = get_first();
    while((ch!='a')&&(ch!='s')&&(ch!='m')&&(ch!='d')&&(ch!='q'))
    {
        printf("Please respond with a, s, m ,d, or q.\n");
        ch = get_first();
    }
    return ch;
}

char get_first()
{
    int ch;
    ch = getchar();
    while(getchar()!='\n')
        continue;
    return ch;
}