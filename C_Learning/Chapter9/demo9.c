#include<stdio.h>
int max(int, int ,int);
int main()
{
    printf("This is a pragram to find the max value of three integres.\n");
    int x, y,c;
    printf("Please enter your three integers with sapce, such as 2 3 4(input q to quit)\n");
    while((scanf("%d %d %d", &x, &y, &c))==3)
    {
        printf("The max value is :%d\n", max(x, y, c));
        printf("Please enter your three integers with sapce, such as 2 3 4(input q to quit)\n");
    }
    printf("Bye.\n");
    return 0;
}
int max(int a, int b, int c)
{   
    int max;
    if(a>=b)
    {
        if(a>=c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if(b>=c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    return max;
}
