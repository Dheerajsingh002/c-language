#include<stdio.h>
int fib(int n)
{
    if(n==1 || n==2)
    {
     return 1;
    }
    else{
    return fib(n-1)+fib(n-2);
}
}
int main()
{
    int n;
    printf("enter the value of n when be print the fabinocci series: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
         printf("%d ",fib(i));
    }
}
