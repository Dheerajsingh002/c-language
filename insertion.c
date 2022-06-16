#include<stdio.h>
void insert(int a[],int len,int pos,int num)
    {
        for(int i=len-1;i>pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=num;
        len=len+1;
        for(int i=0;i<len;i++)
        {
            printf("%d ",a[i]);
        }
    }
    
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    insert(a,10,6,30);
}