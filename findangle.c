#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter one angle");
    scanf("%d",&a);
    printf("enter the second angle");
    scanf("%d",&b);
    c=a+b;
    int result=180-c;
    printf("%d",result);
}