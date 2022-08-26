#include<stdio.h>
int main()
{
    char ch;
    char ch_prev = ' ';
    int counts=0;
    printf("input your message terminated with #.\n");
    while((ch=getchar())!='#')
    {
        if(ch=='e')
        {
            ch_prev = ch;
        }
        else if(ch=='i'&&ch_prev=='e')
        {
            counts++;
            ch_prev = '0';
        }
        else
        {
            ch_prev = '0';
        }
    }
    printf("The numbers of \" ei\" is%d.\n", counts);
    return 0;
}