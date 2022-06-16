#include<stdio.h>
int main()
{
    int n,sum=0;
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
   sum=sum+*(ptr+i);

}

printf("the sumopf arrya=%d",sum);
}