#include<stdio.h>
#include<ctype.h>
int report(char);
int main()
{
    char ch;
    // printf("ch position %d", report(ch));
    printf("Enter some characters terminated with #\n");
    while((ch = getchar())!='#')
    {
        // putchar(ch);
        if(isalpha(ch))
        {
            printf("%d ", report(ch));
        }
        else{
            printf("%d ", -1);  
        }
        
    }

    return 0;
}

int report(char ch)
{
    char ch1;
    ch1 = tolower(ch);
    int position;
    position = ch1 - 'a' + 1;
    return position;
}


