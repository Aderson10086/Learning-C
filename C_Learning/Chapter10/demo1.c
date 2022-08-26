#include<stdio.h>
#define MONTHS 12
int main()
{
    const int Days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int index=0;index<MONTHS;index++)
    {
        printf("Month %d has %d days\n", index+1, Days[index]);
    }
    return 0;
}