#include<stdio.h>
#include<math.h>
int main()
{
    float a,area;
    printf("enter the side of triangle");
    scanf("%f",&a);
    area=(sqrt(3)*a*a)/4;
    printf("%f",area);
}