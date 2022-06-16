#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of an arrayu: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int iteam;
    scanf("%d",&iteam);
    for(i=0;i<n;i++)
    {
        if(iteam==arr[i])
        {
            printf("search succesfull: %d\n",i+1);
        }
    }
    if(iteam==n)
    {
        printf("search not found");
    }

}