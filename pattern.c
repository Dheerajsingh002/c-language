#include<stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int val=i+1;
        int dec=n;
        for(j=0;j<n-i;j++)
        {
           
            printf("%d ",val);
            val=val+dec;
            dec=dec-1;
        }
        printf("\n");
    }
}