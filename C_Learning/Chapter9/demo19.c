#include<stdio.h>
void Fibonacci();
int main()
{
    printf("This is a proram to print Fibonacci series.\n");
    Fibonacci();
    return 0;
}

void Fibonacci()
{
    printf("please enter an integer: ");
    int max;
    scanf("%d", &max);
    printf("The fibonacci series <= %d is: ",max);
    int n0=1;
    int n1=1;
    printf("%d %d ", n0, n1);
    int n_next = n1 + n0;
    while(n_next<=max)
    {
        printf("%d ", n_next);
        n0 = n1;
        n1 = n_next;
        n_next = n1 + n0;
    }
    putchar('\n');
}