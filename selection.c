#include<stdio.h>
int main()
{
    int n,i,j,min,pos,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=arr[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
              min=arr[j];
              pos=j;          
            }
        }
        if(pos!=i)
        {
           temp=arr[pos];
           arr[pos]=arr[i];
           arr[i]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}