#include<stdio.h>
#include<stdlib.h>
#define PRICE_A 2.05
#define PRICE_B 1.15
#define PRICE_C 1.09
int main()
{
        printf("This is a buy vegetables program!\n");
        printf("There are three kinds of vegetales you can choose\n");
        printf("a:%.2f$/pt\tb:%.2f$/pt\tc:%.2f$/pt\t q:quit buying\n", PRICE_A, PRICE_B, PRICE_C);
        float Weight_A = 0.0;
        float Weight_B = 0.0;
        float Weight_C = 0.0;
        float Weight = 0.0;
        char choice;
    while(1)
    {
        printf("Pleas enter what kind you want to buy or quit buying with q?:\n");
        scanf("%c", &choice);
        if(choice=='q')
        {
            printf("quit buying, welcome next!\n");
            break;
        }

        switch (choice)
        {
        case 'a':
            float Weight_a;
            printf("Please enter how much pounds a you want to buy:\n");
            scanf("%f", &Weight_a);
            Weight_A += Weight_a;
            break;
        case 'b':
            float Weight_b;
            printf("Please enter how much pounds b you want to buy:\n");
            scanf("%f", &Weight_b);
            Weight_B += Weight_b;
            break;
        case 'c':
            float Weight_c;
            printf("Please enter how much pounds c you want to buy:\n");
            scanf("%f", &Weight_c);
            Weight_C += Weight_c;
            break;
        default:
            break;
        }
        // printf("You have brought %.2f ponds a, %.2f pounds b, and %.2f pounds c\n", Weight_A, Weight_B, Weight_C);
    }
    printf("-----------------------------------------------------\n");
    printf("You have brought totaly %.2f ponds a, %.2f pounds b, and %.2f pounds c\n", Weight_A, Weight_B, Weight_C);
    float Money_vegetable = Weight_A * PRICE_A + Weight_B * PRICE_B + Weight_C * PRICE_C;
    Weight = Weight_A + Weight_B + Weight_C;
    printf("The money of vegetable is %.2f$, and total weights is %.2f pounds\n", Money_vegetable, Weight);
    float Money_Other;
    if(Weight<=5)
    {
        Money_Other = 6.5;
    }
    else if (Weight>5&&Weight<=20)
    {
        Money_Other = 14;
    }
    else
    {
        Money_Other = 14 + 0.5*(Weight-20);
    }
    printf("You have brought %.2f pounds vegetable,You should pay for %.2f$, contains %.2f for vegetable and %.2f for transport\n",
            Weight, (Money_Other+Money_vegetable), Money_vegetable, Money_Other);
    return 0;
}