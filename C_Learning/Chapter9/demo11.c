#include<stdio.h>
void printf_char(char, int, int);
int main()
{   
    printf_char('2', 4,5);
    return 0;
}

void printf_char(char ch, int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}