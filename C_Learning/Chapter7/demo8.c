#include<stdio.h>
int main()
{
    char ch;
    int num=0;
    while(1)
    {
        ch = getchar();
        if(ch=='#')
            break;
        switch (ch)
        {   
            case '.':
                ch = '!';
                num++;
                break;
            case '!':
                ch = 'x';
                num++;
                break;
            default:
                break;
        }
    }
    printf("replace numbers is %d", num);
    return 0;
}