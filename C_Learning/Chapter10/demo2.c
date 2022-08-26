#include<stdio.h>
#define MONTHS 12
int main()
{

    int days[MONTHS] = {31, 28, [4]=31, 20, 31, [1]=29};
    for(int index=0;index<MONTHS;index++)
    {
        printf("Month %d has %d days.\n", index+1, days[index]);
    }
    return 0;
}