#include<stdio.h>
int main()
{
  int n,temp;
  scanf("%d",&n);
  int arr[10];  
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i+=2)
  {
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;   
  }
   for(int i=0;i<n;i++)
  {
      printf("%d\n",arr[i]);
  }
}