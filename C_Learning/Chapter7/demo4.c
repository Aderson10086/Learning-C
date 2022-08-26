#include<stdio.h>
#include<ctype.h>
int main()
{
    printf("This is a program to statistical some information about your input message.\n");
    printf("Please entered your message terminated with #\n");
    char ch;
    int n_space=0;
    int n_enter=0;
    int n_else=0;
    while((ch = getchar())!='#')
    {
        if(isspace(ch))
        {
            n_space++;
        }
        else if(ch == '\n')
        {
            n_enter++;
        }
        else
        {
            n_else++;
        }
    }
        printf("The information of your message!\n");
        printf("You entered %d characters,%d spaces, %d enter and %d others\n",(n_else+n_enter+n_space), n_space, n_enter, n_else);
    return 0;
}