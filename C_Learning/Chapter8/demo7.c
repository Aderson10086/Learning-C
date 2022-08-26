#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    int num_words = 1;
    int ch_num = 0;
    while((ch = getchar())!='\n')
    {
        if(ch!=' ')
        {
            ch_num++;
        }
        else
        {
            num_words++;
        }
    }

    printf("The mean characters of word:%.2f\n", (float) ch_num / num_words);



    return 0;
}