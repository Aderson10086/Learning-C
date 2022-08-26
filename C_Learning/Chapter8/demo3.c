//check input 
#include<stdio.h>
#include<stdbool.h>
long get_long(void);
bool bad_limits(long begin, long end, long low, long high);
//calcaute sum of square a~b
double sum_squares(long a, long b);
int main()
{
    const long MIN = -10000000L; //lower bond
    const long MAX = 10000000L;//upper bond
    long start;
    long stop;
    double answer;
    printf("This program computes the sum of the squares of intergers in a range.\n"
    "lowerb bond should not be less than -1000000 and the upper bond should not be more\n"
    "than 1000000.\nEnter the lower limits:\n");
    start = get_long();
    printf("upper limit: \n");
    stop = get_long();
    while(start!=0||stop!=0)
    {
        if (bad_limits(start, stop, MIN, MAX))
        {
            printf("Please try again\n");
        }
        else{
            answer = sum_squares(start, stop);
            printf("the sum of the squares of the integers ");
            printf("from %ld to %ld is %g\n", start, stop, answer);
        }
        printf("Enter the limits (enter 0 for both limits to quits=):\n");
        printf("lower limits:\n");
        start = get_long();
        printf("upper limis: ");
        stop = get_long();
    }
    printf("Done.\n");
    return 0;
}

long get_long(void)
{

    long input;
    char ch;
    while(scanf("%ld", &input)!=1)
    {
        while((ch=getchar())!='\n')
        {
            putchar(ch);
        }
        printf("is not an integer. please enter an integer value, such as 75, -190.\n");
    }
    return input;

}

double sum_squares(long a, long b)
{
  double total = 0;
  long i;
  for(i=a;i<b;i++)
  {
    total += (double) i * (double) i;
  }
  return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;
    if(begin>end)
    {
        printf("%ld isn't smaller than %ld.\n", begin, end);
        not_good = true;
    }
    if(begin<low || end<low)
    {
        printf("Values must be %ld or greater.\n", low);
        not_good = true;
    }
    if(begin>high||end>high)
    {
        printf("Values muse be %ld or less.\n", high);
        not_good = true;
    }
    return not_good;
}