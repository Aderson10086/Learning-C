#include<stdio.h>
void show_VLA(int rows, int cols, double [*][*]);
void copy_VLA(int , int, double [*][*], double[*][*]);
int main()
{
    int row = 5;
    int cols = 5;
    double arr[row][cols]; //VLA
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            arr[i][j] = i+j+0.25;
        }
    }
    show_VLA(row, cols, arr);
    double arr_target[row][cols];
    copy_VLA(row, cols, arr, arr_target);
    printf("Copy end.\n");
    show_VLA(row, cols, arr_target);
    return 0;
}

void show_VLA(int rows, int cols, double arr[rows][cols])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%.2lf ", arr[i][j]);
        }
        putchar('\n');
    }
}

void copy_VLA(int rows, int cols, double source[rows][cols], double target[rows][cols])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            target[i][j] = source[i][j];
        }
    }
}