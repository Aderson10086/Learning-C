#include<stdio.h>
int main()
{
// statistics the number of character
char ch;
int num = 0;
while((ch = getchar())!='#')
{
    putchar(ch);
    num++;
}
putchar('\n');
printf("The total characters your input is %d\n", num);

}