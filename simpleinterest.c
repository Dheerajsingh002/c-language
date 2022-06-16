#include<stdio.h>
int main()
{
    float s,p,r,t;
    printf("enter the principle  balance");
    scanf("%f",&p);
    printf("enter the value of interest rate");
    scanf("%f",&r);
    printf("enter the value of time");
    scanf("%f",&t);
    s=(p*r*t)/100;
    printf("%f",s);
    return 0;
}