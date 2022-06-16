#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    printf("enter the value");
    scanf("%d",&x);
    printf("enter the power");
    scanf("%d",&n);
    int res=pow(x,n);
    printf("%d",res);
}