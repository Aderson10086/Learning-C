#include<stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    while(fgets(words, STLEN, stdin)!=NULL &&words[0]!='\n')
    {
        fputs(words, stdout);
        // puts(words);
    }
    puts("Done.");
    return 0;
}