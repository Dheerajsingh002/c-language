#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first value: ");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number: ");
    scanf("%d",&c);
    if(a>b & a>c)
    {
        printf("%d",a);
    }
    else if(b>a && b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }

}