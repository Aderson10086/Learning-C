#include<stdio.h>
#define MAX 20
char * s_gets(char *str, int n);
int main()
{
    char first[MAX];
    char last[MAX];
    char formal[2*MAX+10];
    double prize;
    puts("Enter you first name:");
    s_gets(first, MAX);
    puts("Enter your last name:");
    s_gets(last, MAX);
    puts("Enter your prize money: ");
    scanf("%lf", &prize);
    sprintf(formal, "%s, %-19s: $%6.2f", last, first, prize);
    puts(formal);
    return 0;
}


char * s_gets(char *str, int n)
{
    char * ret_val;
    int i=0;
    ret_val = fgets(str, n, stdin);
    if(ret_val)
    {   
        while(str[i]!='\0'&&str[i]!='\n')
            i++;
        if(str[i] = '\n')
        {
            str[i] = '\0';
        }
        else
        {
            while(getchar()!='\n')
            {
                continue;
            }
        }
    }
    return ret_val;
}