#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first side: ");
    scanf("%d",&a);
    printf("enter the second side: ");
    scanf("%d",&b);
    printf("enter the third side: ");
    scanf("%d",&c);
    if(a==b && b==c && c==a)
    {
        printf("equilateral triangle");
    }
    else if(a==b || b==c || c==a)
    {
        printf("scalene triangle");
    }
    else if(a!=b && b!=c && c!=a)
    {
        printf("isoscelene triangle");
    }
    else
    {
        printf("invalid triangle");
    }
}