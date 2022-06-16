#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int mid,first=0,last=0,item;
    printf("enter the iteam: ");
    scanf("%d",&item);
    mid=first+last/2;
    while((item!=arr[mid])&& (first=last))
    {
        if(item>arr[mid])
        {
            first=first+1;
        }
        else
        {
            last=last-1;
            mid=first+last/2;
        }
    }
    while(i<n)
    {
        printf("%d",i+1);
        i++;
    }
}