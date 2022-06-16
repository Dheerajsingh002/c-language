#include<stdio.h>
int main()
{
    int a,f=1;
    printf("enter the value: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("%d",f);
}