#include<stdio.h>
int main()
{
    int number;
    int counts_odds = 0;
    int counts_evens = 0;
    float sum_odds=0;
    float sum_evens=0;
    while(1)
    {
        scanf("%d", &number);
        if(number==0)
        {
            break;
        }
        else if(number%2==0)
        {
            counts_evens++;
            sum_evens += number;
        }
        else
        {
            counts_odds++;
            sum_odds +=number;
        }
    }
    printf("Your entered %d numbers(non-zero), and %d evens with average %.2f, and %d odds with average %.2f.\n", counts_evens+counts_odds, counts_evens, 
            sum_evens/counts_evens, counts_odds,  sum_odds/counts_odds);
    return 0;
}