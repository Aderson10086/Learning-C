#include<stdio.h>
void get_input(int rows, int cols, double[*][*]);
void show_VLA(int, int, double[*][*]);
void average_VLA(int, int, double[*][*]);
int main()
{
    int rows;
    int cols;
    printf("please enter your rows and colums of matrx:\n");
    scanf("%d %d", &rows, &cols);
    double arr[rows][cols];
    get_input(rows, cols, arr);
    printf("You have entered matrix is :\n");
    show_VLA(rows, cols, arr);
    printf("Calculate average\n");
    average_VLA(rows, cols, arr);
    return 0;
}

void get_input(int rows, int cols, double arr[rows][cols])
{
    printf("Enter %d rows and %d columns numbers to construct a matrix\n", rows, cols);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
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

void average_VLA(int rows, int cols, double arr[rows][cols])
{
    double average = 0;
    for(int i=0;i<rows;i++)
    {   
        double result = 0.0;
        for(int j=0;j<cols;j++)
        {
            result += arr[i][j];
        }
        printf("The %dth rows mean is :%.2lf\n",i+1, result/cols);
        average += result;
    }
    printf("The mean of you entered is:%.2lf\n", average/(rows*cols));
}
