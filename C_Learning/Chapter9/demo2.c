#include<stdio.h>
#include<string.h> //strlen() function needed.
#define NAME "GIGATHINK, INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '
void starbar(char ch, int num);
int main()
{
    starbar('*', WIDTH);
    putchar('\n');
    starbar(SPACE, 12);
    printf("%s", NAME);
    starbar(SPACE, (WIDTH-strlen(NAME))/2);
    putchar('\n');
    starbar(SPACE, (WIDTH-strlen(ADDRESS))/2);
    printf("%s", ADDRESS);
    starbar(SPACE, (WIDTH-strlen(ADDRESS))/2);
    putchar('\n');
    starbar(SPACE, (WIDTH-strlen(PLACE))/2);
    printf("%s", PLACE);
    starbar(SPACE, (WIDTH-strlen(PLACE))/2);
    putchar('\n');
    starbar('*', WIDTH);
    putchar('\n');
    return 0;
}
void starbar(char ch, int num)
{
    int count;
    for(count=1;count<num;count++)
    {
        putchar(ch);
    }
}