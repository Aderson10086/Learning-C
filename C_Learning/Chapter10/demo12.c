#include<stdio.h>
#define COLS 3
void copy2d(double (*)[COLS], double (*)[COLS], int rows);
void show2d(double(*)[COLS], int rows);
int main()
{
    double source[3][3] = {
        {1,2,3},{4,5,6},{7,8,9}
    };
    double target[3][3];
    show2d(source, 3);
    printf("After copy!\n");
    copy2d(target, source, 3);
    show2d(target,3);
    return 0;
}

void copy2d(double (*target)[COLS], double (*source)[COLS], int rows)
{
    for(int r=0;r<rows;r++)
    {
        for(int c =0;c<COLS;c++)
        {
            *(*(target+r)+c) = *(*(source+r)+c);//
            target[r][c] = source[r][c];
        }
    }
}

void show2d(double(*arr)[COLS], int rows)
{
    for(int r=0;r<rows;r++)
    {
        for(int c =0;c<COLS;c++)
        {
            printf("%.2lf  ", *(*(arr+r)+c));
        }
        putchar('\n');
    }

}