#include<stdio.h>
// void print_array(int arr[4][3], int m ,int n); //cant work
void print_array_ptr(int (*pz)[3], int m, int n);
int main()
{

    int zippo[5][3] = {
        {2,4,5}, {6,8,5}, {1,3,5}, {5,7,7},{4,5,6}
    };
    int (*pz) [3]; //
    pz = zippo;
    printf("zippo = %p, pz = %p\n", zippo, pz);
    printf("zippo[0] = %p, pz[0] = %p\n", zippo[0], pz[0]);
    printf("&zipp[0][0] = %p, pz[1] = %p\n", &zippo[0][0], pz[1]);
    printf("zipp[0][0] = %d\n", **zippo);
    printf("zipp[0][1] = %d\n", *(*zippo+1));
    printf("zipp[1][0] = %d\n",**(zippo+1));
    printf("%d\n", *pz[1]);
    print_array_ptr(zippo, 5,3);
    return 0;
}

void print_array_ptr(int arr[][3], int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ", *(*(arr+i)+j));
        }
        putchar('\n');
    }
}