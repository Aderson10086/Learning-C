#include<stdio.h>
int main()
{
    char ch;
    int num = 0;
    while(1)
    {
        ch = getchar();
        if(ch=='#')
            break;
        else if(ch=='.')
        {
            ch = '!';
            num++;
        }
        else if(ch=='!')
        {
            ch = 'x';
            num++;
        }
    }
    printf("replace numers is %d\n", num);
    return 0;
}