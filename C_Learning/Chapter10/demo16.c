#include<stdio.h>
#define COLS 5
void show2d(int(*)[COLS], int rows);
void multi2(int(*)[COLS], int rows);
int main()
{

    int arr[3][5] = {
        {1,2,3,4,5},{6,7,8,9,10},{2,4,5,7,9}
    };
    show2d(arr, 3);
    printf("multi 2: ");
    multi2(arr, 3);
    show2d(arr, 3);
    return 0;


}
void show2d(int(*arr)[COLS], int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        putchar('\n');
    }
}

void multi2(int(*arr)[COLS], int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            arr[i][j] *= 2;
        }
    }
    putchar('\n');
}