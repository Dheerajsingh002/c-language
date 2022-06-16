#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int marks[n];
    int total=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
        total=marks[i]+total;
    }
    int average=total/n;
    float percentage;
    percentage=total*100/500;
        printf("%d\n",total);
        printf("%d\n",average);
        printf("%f",percentage);
}