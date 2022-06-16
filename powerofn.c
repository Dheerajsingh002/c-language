#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    printf("enter the number which one find power: ");
    scanf("%d",&m);
    printf("enter the power of a number: ");
    scanf("%d",&n);
    int result=pow(m,n);
    printf("power of m: %d",result);
    return 0;
}