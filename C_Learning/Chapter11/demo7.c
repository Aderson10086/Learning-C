#include<stdio.h>
char * s_gets(char *st, int n);

int main()
{

    const int length = 12;
    char ch[12];
    char *pt;
    pt = s_gets(ch, length);
    fputs(pt, stdout);
    return 0;
}

char *s_gets(char *st, int n)
{   
    char * ret_val;
    int i=0;
    ret_val = fgets(st, n, stdin);
    if(ret_val) // ret_val !=NULL;
    {
        while(st[i]!='\n'&&st[i]!='\0')
        
            i++;
        if(st[i]=='\n')
        {
            st[i] = '\0';
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