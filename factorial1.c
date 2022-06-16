#include<stdio.h>
int main()
{
    int n;
    printf("enter the value which oone gave factorial: ");
    scanf("%d",&n);
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;

    }
    printf("%d",f);
}
