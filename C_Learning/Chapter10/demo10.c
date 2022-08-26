#include<stdio.h>
#define MONTHS 12
#define YEARS 5
void average_year(const float(*)[MONTHS], int years);
void average_month(const float(*)[MONTHS], int years);
int main()
{
    const float rain[YEARS][MONTHS] = 
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.3},
        {7.5, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    average_year(rain, YEARS);
    average_month(rain, YEARS);
}
void average_year(const float(*ptr)[MONTHS], int years)
{
    for(int y=0;y<years;y++)
    {
        float year_rainfall=0;
        for(int m=0;m<MONTHS;m++)
        {
            year_rainfall += *(*(ptr+y)+m);
        }
        printf("%dth year average:%.2f\n", y+1, year_rainfall);
    }
}

void average_month(const float(*ptr)[MONTHS], int years)
{
    for(int m=0;m<MONTHS;m++)
    {
        float month_rainfall = 0;
        for(int y=0;y<years;y++)
        {
            month_rainfall += *(*(ptr+y)+m);
        }
        printf("%dth months: %.2f\n", m+1, month_rainfall/5);
    }
}