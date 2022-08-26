#include<stdio.h>
#define COLS 5
void get_input(double(*)[COLS], int rows);
void show2d(double(*)[COLS], int rows);
void average_row(double(*)[COLS], int rows);
int main()
{
    int rows=3;
    printf("please enter three group numbers, every group contains five numbers.\n");
    double arr[rows][COLS];
    get_input(arr, rows);
    printf("you entered matrix is :\n");
    show2d(arr, rows);
    average_row(arr, rows);
    return 0;

}

void show2d(double(*arr)[COLS], int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            printf("%.2lf\t", arr[i][j]);
        }
        putchar('\n');
    }
}

void get_input(double(*arr)[COLS], int rows)
{
    for(int i = 0;i<rows;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            scanf("%lf", *(arr+i)+j);
        }
    }
}

void average_row(double(*arr)[COLS], int rows)
{
    double average = 0;
    for(int i=0;i<rows;i++)
    {
        double result = 0.0;
        for(int j=0;j<COLS;j++)
        {
            result += arr[i][j];
        }
        printf("mean of %dth row: %.2lf\n", i+1, result/COLS);
        average += result;
    }
    printf("The mean of you entered %.2lf\n", average/(COLS * rows));
}