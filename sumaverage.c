#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of array elements");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    printf("enter the element of an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of array elements: %d\n ",sum);
    int average=sum/n;
    printf("average of array elemnts: %d",average);

}