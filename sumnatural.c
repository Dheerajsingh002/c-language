#include<stdio.h>
int main()
{
    int n;
    printf("enter the number when the sum print of natural number: ");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    // for(int i=1;i<=n;i++)
    // {
    //     sum=sum+i;
    // }
    printf("%d",sum);
    
}