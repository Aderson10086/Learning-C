#include<stdio.h>
int main()
{
    printf("Entered your message terminated with #.\n");
    char ch;
    int num = 0;
    while((ch = getchar())!='#')
    {
        num++;
        if((num%8==0))
            {
                printf("%c: %d ",ch,ch);
                printf("\n");
            }
        else
        {
            printf("%c: %d ",ch,ch);
        }
    }
    return 0;
}