#include<stdio.h>
#define ROWS 3
#define COLS 4
int sum2d(int rows, int cols, int ar[rows][cols]);//variable length array.
void show_array(int, int, int ar[*][*]);
int main()
{
    int i, j;
    int rs = 3;
    int cs = 10;
    int junk[ROWS][COLS] = {
        {2,4,6,8},
        {3,5,7,9},
        {10,12,8,6}
    };
    int morejunk[ROWS-1][COLS+2] = {
        {20,30,40,50,60,70},
        {5,6,7,8,9,10}
    };
    int varr[rs][cs]; //variable length array
    //initialize
    for(i=0;i<rs;i++)
    {
        for(j=0;j<cs;j++)
        {
            varr[i][j] = i * j + j;
        }
    }
    printf("3 x 4 array\n");
    show_array(ROWS, COLS, junk);
    printf("sum of array:%d\n", sum2d(ROWS,COLS,junk));
    printf("2 x 6 arry\n");
    show_array(2,6, morejunk);
    printf("sum of array:%d\n", sum2d(2,6,morejunk));
    printf("%d x %d array\n", rs, cs);
    show_array(rs,cs, varr);
    printf("sum of array:%d\n", sum2d(rs,cs,varr));
    
    return 0;
}

int sum2d(int rows, int cols, int ar[rows][cols])
{
    int sum = 0;
    for(int r = 0;r<rows;r++)
    {
        for(int c=0;c<cols;c++)
        {
            sum += ar[r][c];
        }
    }
    return sum;
}
void show_array(int rows, int cols, int ar[rows][cols])
{
    for(int r=0;r<rows;r++)
    {
        for(int c =0;c<cols;c++)
        {
            printf("%d\t", ar[r][c]);
        }
        putchar('\n');
    }
}

