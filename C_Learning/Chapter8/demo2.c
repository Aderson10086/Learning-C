#include<stdio.h>
void display(char ch, int lines, int rows);
int main()
{
    int ch; //character
    int rows, cols;
    printf("Enter a character.\n");
    while((ch=getchar())!='\n')
    {
        printf("Enter two integer with comma, like 2,3.\n");
        if(scanf("%d,%d", &rows, &cols)!=2)
        {
            break;
        }
        display(ch, rows, cols);
        while(getchar()!='\n')
        {
            continue;
        }
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");
    return 0;
}

void display(char ch, int lines, int rows)
{
    int row, col;
    for(row=1;row<=lines;row++)
    {
        for(col=1;col<=rows; col++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}