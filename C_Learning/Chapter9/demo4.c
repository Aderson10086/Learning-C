#include<stdio.h>
long fact(int);
long rfact(int);
int main()
{
    int num;
    printf("This is a proragm to calcultae the factorial of an positive integer under 13.\n");
    printf("input q to quit!.\n");
    while((scanf("%d", &num))==1)
    {
        if(num<0)
        {
            printf("No negative numbers\n");
        }
        else if(num>12)
        {
            printf("Keep number under 12");
        }
        printf("loop: %d factorial = %ld\n", num, fact(num));
        printf("recursion: %d factorial = %ld\n", num, rfact(num));
    }
    return 0;
    printf("Bye.\n");
}

long fact(int n)
{
    long ans;
    for(ans=1;n>1;n--)
    {
        ans *= n;
    }
    return ans;
}

long rfact(int n)
{
    long ans;
    ans = (n>0)?(ans = n*rfact(n-1)):1;
    return ans;
}