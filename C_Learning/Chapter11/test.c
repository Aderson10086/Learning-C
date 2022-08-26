#include<stdio.h>
char * find(char *);
int main()
{
    char str[] = "How are you?";
    char *ptr;
    ptr = find(str);
    printf("the adderss of %c is %p\n",*ptr, ptr);

    return 0;
}

char * find(char *str)
{
    char * space;
    while(*str++)
    {
        if(*str==' ')
        {
            space = str;
            *str = '\0';
        }
            
        else 
        {
            continue;
        }
    }
    return space;
}