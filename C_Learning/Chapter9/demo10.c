#include<stdio.h>
void show_menu(void);
int get_input(int, int);
int main()
{
    int ch;
    while((ch = get_input(1,4))!=4)
    {
        switch (ch)
        {
            case 1:
                printf("copy flles\n");
                break;
            case 2:
                printf("move files\n");
                break;
            case 3:
                printf("remove fiels\n");
                break;
            default:
                break;
        }
        
    }
    
    printf("quit system!\n");
    return 0;
}

void show_menu()
{
    printf("Enter the number of your  choice.\n");
    printf("********************************\n");
    printf("1) copy files     2) move files\n");
    printf("3) remove files     4) quit\n");
}

int get_input(int lower, int upper)
{
    show_menu();
    int choice;
    int status;
    while((status=scanf("%d", &choice))!=1||choice>upper||choice<lower)
    {
        if(status!=1)
            choice = 4;
            break;
        printf("input an integer in interval[%d,%d]\n", lower, upper);
    }
    return choice;
}