#include<stdio.h>
#include<string.h>
#define SIZE 40
#define ANSWER "Grant"
char *s_gets(char *, int);
int main()
{
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while(strcmp(try, ANSWER)!=0) //equal return 0;
    {
        puts("No, That's wrong.please try again.");
        s_gets(try,SIZE);
    }
    puts("That's right!");
    return 0;
}

char *s_gets(char * string, int n)
{
    char *ret_val;
    int i=0;
    ret_val = fgets(string, n, stdin);
    if(ret_val)
    {
        while(string[i]!='\n'&&string[i]!='\0')
            i++;
        if(string[i]=='\n')
        {
            string[i] = '\0';
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