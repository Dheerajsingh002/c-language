#include<stdio.h>
int main()
{
    int n;
    int i=2;
    printf("enter the number: ");
    scanf("%d",&n);
    while(i<n)
    {
        printf("%d ",i);
        i++;
    }
}