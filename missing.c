#include<stdio.h>
int main()
{
    int total;
    int n;
    scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);   
    }
    n=n+1;
    total=(n*(n+1))/2;//551
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
       sum=sum+arr[i];//47   
    }
    int result=total-sum;
    printf("%d",result);
    return 0;

}