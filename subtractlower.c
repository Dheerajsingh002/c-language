#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    if(a>b)
    {
        int result=a-b;
        printf("%d",result);
    }
    else
    {
        
        printf("%d",b-a);
    }
}