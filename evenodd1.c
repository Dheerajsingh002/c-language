#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
     printf("enter the size of an array: ");
     scanf("%d",&n);
     int a[n];
    int *ptr;

     printf("enter the number of array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ptr=a; 
    for(int i=0;i<n;i++)
    {  
        if(*(ptr+i)%2==0)
        even=even+1;
        else
        odd=odd+1;
    }
    printf("the number of even=%d\n",even);
    printf("the number of odd=%d",odd);
}