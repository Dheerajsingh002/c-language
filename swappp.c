#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=3;
    for(int i=k;i<=k;i++)
    {
       arr[i+1]=arr[i];
    }
    arr[0]=arr[k];
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}