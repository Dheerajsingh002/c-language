
#include<stdio.h>
int main()
{
    float pie,r,volume;
    printf("enter the value of pie: ");
    scanf("%f",&pie);
    printf("enter the radius");
    scanf("%f",&r);
    volume=4*(pie*r*r*r)/3;
    printf("%f",volume);

}