#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("after reversing array:\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}