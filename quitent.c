#include<stdio.h>
int main()
{
    int divendend,divisior,quotient,remainder;
    printf("enter the value of divendend: ");
    scanf("%d",&divendend);
    printf("enter the value of divisior: ");
    scanf("%d",&divisior);
    quotient=divendend/divisior;
    remainder=divendend%divisior;
    printf("%d\n%d",quotient,remainder);
    return 0;
}