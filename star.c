#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of lines: ");
    scanf("%d",&n);
    int a=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int j=i;j<=n-1;j++)
        {
            printf("%d",i);
            
        }
        printf("\n");
    }
    
}