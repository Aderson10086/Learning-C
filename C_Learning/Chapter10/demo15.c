#include<stdio.h>
void add_array(float *, float *, float *, int size);
void showArray(float *, int size);
int main()
{
    const int size = 10;
    float arr1[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    float arr2[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("arr1 = ");
    showArray(arr1, size);
    printf("arr2 = ");
    showArray(arr2, size);
    float arr3[10];
    printf("arr1+arr2= ");
    add_array(arr1, arr2, arr3,size);
    showArray(arr3,size);
    return 0;


}
void showArray(float arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%.2f ", arr[i]);
    }
    putchar('\n');
}
void add_array(float arr1[], float arr2[], float arr3[], int size)
{
    for(int i=0;i<size;i++)
    {
        arr3[i] = *(arr1+i)+*(arr2+i);
    }

}