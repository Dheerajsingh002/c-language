#include<stdio.h>
void deletion(int a[],int len,int pos)
{
    int num,i;
    num=a[pos];
    for(i=pos;i<len;i++)
    {
        a[i]=a[i+1];
    }
    len=len-1;
    for(int i=0;i<len;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    deletion(a,10,4);
}