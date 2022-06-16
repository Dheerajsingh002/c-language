#include<stdio.h>
int main()
{
    int amount;
    printf("enter the amount: ");
    scanf("%d",&amount);
    if(amount>25000)
    {
        printf("GOLD");
        int discount =(amount*20)/100;
        printf("\ndiscount:%d",discount);
    }
    else if(amount>10000 && amount<25000)
    {
        printf("SILVER");
        int discount=(amount*10)/100;
        printf("\ndiscount:%d",discount);
    }
    else
    {
       printf("BRONZE");
       int discount=(amount*5)/100;
       printf("\ndiscount:%d",discount);
    }
}