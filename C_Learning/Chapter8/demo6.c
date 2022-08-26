#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    int num_alpha = 0;
    int num_Captial = 0;
    while((ch=getchar())!='&')
    {
        if(islower(ch))
        {
            num_alpha++;
        }
        if(isupper(ch))
        {
            num_Captial++;
        }

    }
    printf("The number of upper character your input is %d, lower is %d\n", num_Captial, num_alpha);
    return 0;
}