#include<stdio.h>
#define COLS 4
int sum2d(const int ar[][COLS], int rows);
int sum(const int ar[], int n);
int main()
{
    int *pt1;
    int (*pt2)[COLS];
    pt1 = (int[2]){10, 20};
    printf("sum of pt1 = (int[2]){10,20} is %d\n", sum(pt1, 2));
    pt2 = (int[][COLS]){{1,2,3,-9},{4,5,6,-8}};
    printf("sum of pt2 is %d\n", sum2d(pt2, 2));
    printf("%d\n", sum((int[6]){1,2,3,4,5},6));



    return 0;
}
int sum(const int ar[], int n)
{
    int result =0;
    for(int i=0;i<n;i++)
    {
        result += ar[i];
    }
    return result;
}
int sum2d(const int ar[][COLS], int rows)
{
    int result =0;
    for(int r=0;r<rows;r++)
    {
        for(int c=0;c<COLS;c++)
        {
            result += ar[r][c];
        }
    }
    return result;
}