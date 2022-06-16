#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter the value: ");
    scanf("%d",&a);
    printf("enter vthe value in power: ");
    scanf("%d",&b);
    int result=pow(a,b);
    printf("%d",result);
    return 0;

}