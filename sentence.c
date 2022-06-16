#include<stdio.h>
int main()
{
    char a[100],n;
    printf("entrer the lenghth of sentnece");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
       if(a[i]==' '){
           for(int j=i;j<n;j++)
           {
             a[j]=a[j+1];
           }
           n--;
       }
    }
    for(int i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }



}