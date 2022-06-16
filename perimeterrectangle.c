#include<stdio.h>
int main()
{
    int l,b,perimeter;
    printf("enter the length of rectangle: ");
    scanf("%d",&l);
    printf("enter the breath of rectangle: ");
    scanf("%d",&b);
    perimeter=2*(l+b);
    printf("%d",perimeter);
}