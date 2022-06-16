#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,area;
    float s;
    printf("enter the first side: ");
    scanf("%d",&a);
    printf("enter the second side: ");
    scanf("%d",&b);
    printf("enter the third side: ");
    scanf("%d",&c);
    s=(a+b+c)/3;
    printf("%f",s);
    // scanf("%d",&s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n%d",area);
}