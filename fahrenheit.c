#include<stdio.h>
int main()
{
    float f,c;
    printf("enter the temperature in fahreheit");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("%f",c);
}