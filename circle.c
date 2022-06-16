#include<stdio.h>
int main()
{
    float pie,r,diameter,circumference,area;
    printf("enter the value of pie: ");
    scanf("%f",&pie);
    printf("enter the radius: ");
    scanf("%f",&r);
    diameter=r/2;
    printf("diameter %f",diameter);
    circumference=2*pie*r;
    printf("\ncircumference %f",circumference);
    area=pie*r*r;
    printf("\narea %f",area);

}