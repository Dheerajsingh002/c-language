#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d\n %d",&a,&b);
    for(int i=a;i<b;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
            
        }    
    }
    printf(" sum of even: %d\n",sum);
}