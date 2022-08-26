#include<stdio.h>
void add_subs(int *, int *);
int main()
{
    int x = 12;
    int y = 23;
    printf("before add_subs:x = %d, y=%d\n", x, y);
    add_subs(&x, &y);
    printf("after add_subs:x = %d, y=%d\n", x, y);
    return 0;
}
void add_subs(int *a, int *b)
{
    int temp1;
    int temp2;
    temp1 = *a;
    temp2 = *b;
    *a = temp1+temp2;
    *b = temp1-temp2;

}