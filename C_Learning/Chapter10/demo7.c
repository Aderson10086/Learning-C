#include<stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int [][COLS], int );
void sum2d(int (*ar)[COLS], int rows);
int main()
{
    int junk[ROWS][COLS] = {
        {2,4,6,8},
        {3,5,7,9},
        {12,10,8,6}
    };
    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    sum2d(junk, ROWS);

    return 0;
}

void sum_rows(int ar[][COLS], int rows)
{
    for(int r=0;r<rows;r++)
    {
        int result = 0;
        for(int c=0;c<COLS;c++)
        {
            result += ar[r][c];
        }
        printf("row %d: sum = %d\n", r, result);
    }
}

void sum_cols(int arr[][COLS], int rows)
{
    for(int c=0;c<COLS;c++)
    {
        int result = 0;
        for(int r=0;r<rows;r++)
        {
            result += arr[r][c];
        }
        printf("col %d: sum = %d\n", c, result);

    }
}

void sum2d(int (*arr)[COLS], int rows)
{
    int result = 0;
    for(int r=0;r<rows;r++)
    {
        for(int c=0;c<COLS;c++)
        {
            result += *(*(arr+r)+c);
        }
    }
    printf("sum:%d\n", result);

}