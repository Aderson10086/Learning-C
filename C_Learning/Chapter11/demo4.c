#include<stdio.h> //fgets()
#define STLEN 14
int main()
{   
    char words[STLEN];
    printf("Enter a string, please\n");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words); //two '\n'
    fputs(words, stdout);//one '\n'
    puts("Enter a nother string, please:");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words,stdout);
    puts("Done.");
    return 0;
}