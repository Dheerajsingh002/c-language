#include<stdio.h>
void func(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        printf("%d",n);
        func(n-1);
        
    }
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    func(n);
}