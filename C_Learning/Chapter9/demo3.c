#include<stdio.h>
int mini(int a, int b);
int main()
{
    printf("This is a program for seeking the minial number between two integers.\n");
    printf("Please enter two integers and with comma(q to quit), like 2,3.\n");
    int a, b;
    while(scanf("%d, %d",&a, &b) == 2)
    {
     printf("The mini integer is %d\n", mini(a, b));   
    }
    printf("Bye.\n");
    return 0;
}
int mini(int a, int b)
{
    return ((a>=b)?b:a);
}